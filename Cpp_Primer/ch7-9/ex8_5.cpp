#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::cout, std::endl, std::ifstream, std::string, std::vector;

int main() {
    ifstream in("test");
    string str;
    vector<string> v;

    while (in >> str) {
        v.push_back(str);
    }

    for (auto &s : v) {
        cout << s << endl;
    }

    return 0;
}
