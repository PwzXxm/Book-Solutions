#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <string>
#include <memory>

class QueryResult;

class TextQuery {
public:
    using Ln = std::vector<std::string>::size_type;

    TextQuery(std::ifstream &infile);

    QueryResult query(const std::string &s) const;

private:
    std::shared_ptr<std::vector<std::string>> input;
    std::map<std::string, std::shared_ptr<std::set<TextQuery::Ln>>> wm;
};

class QueryResult {
public:
    friend std::ostream& print(std::ostream &, const QueryResult &);
    QueryResult(const std::string &s, std::shared_ptr<std::set<TextQuery::Ln>> st, std::shared_ptr<std::vector<std::string>> v): word(s), lns(st), input(v) {}
private:
    std::string word;
    std::shared_ptr<std::set<TextQuery::Ln>> lns;
    std::shared_ptr<std::vector<std::string>> input;
};

TextQuery::TextQuery(std::ifstream &infile): input(new std::vector<std::string>) {
    std::string text;
    while (getline(infile, text)) {
        input->push_back(text);
        int ln = input->size()-1;
        std::istringstream line(text);
        std::string word;
        while (line >> word) {
            auto &lines = wm[word];
            if (!lines) {
                lines.reset(new std::set<Ln>);
            } 
            lines->insert(ln);
        }
    }
}

QueryResult TextQuery::query(const std::string &s) const {
    static std::shared_ptr<std::set<Ln>> nodata(new std::set<Ln>);
    auto loc = wm.find(s);
    if (loc == wm.end())
        return QueryResult(s, nodata, input);
    else
        return QueryResult(s, loc->second, input);
}

std::ostream& print(std::ostream &os, const QueryResult &result) {
    int t = result.lns->size();
    os << result.word << " occurs " << t << (t > 1 ? " times" : " time") << std::endl;
    for (auto elem : *(result.lns)) {
        os << "\t(line " << elem+1 << ") " << result.input->at(elem) << std::endl;
    }
    return os;
};

void runQueries(std::ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout,tq.query(s)) << std::endl;
    }

}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Please input a file\n";
        return -1;
    }

    std::ifstream in(argv[1]);
    runQueries(in);

    return 0;
}
