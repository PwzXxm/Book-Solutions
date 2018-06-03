#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using std::istringstream, std::endl, std::cin, std::vector, std::string, std::cout;

struct PersonInfo {
    string name;
    vector<string> phones;
};

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

    for (auto &p : people) {
        cout << p.name << " ";
        for (auto &ph : p.phones) {
            cout << ph << " ";
        }
        cout << endl;
    }

    return 0;
}
