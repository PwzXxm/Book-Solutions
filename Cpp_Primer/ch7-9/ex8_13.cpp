#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using std::istringstream, std::endl, std::cin, std::vector, std::string, std::cout, std::ostringstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(const string &s) {
    for (auto ch : s) {
        if (ch-'0' < 0 || ch-'0' > 9) return false;
    }
    return true;
}

string format(const string &s) {
    return s;
}

int main() {
    string line, word;
    vector<PersonInfo> people;

    istringstream record;
    while (getline(cin, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);

        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }

        people.push_back(info);
    }

    for (const auto &p : people) {
        ostringstream formatted, badNums;
        for (const auto &ph : p.phones) {
            if (!valid(ph)) {
                badNums << " " << ph;
            } else {
                formatted << " " << format(ph);
            }
        }

        if (badNums.str().empty()) cout << p.name << " " << formatted.str() << endl;
        else std::cerr << "Invalid input: " << p.name << " " << badNums.str() << endl;
    }

    return 0;
}
