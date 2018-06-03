#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
using std::cout, std::endl, std::ifstream, std::string, std::vector;
using std::istringstream;

int main() {
    ifstream in("test");
    string str;
    vector<string> v;

    while (getline(in, str)) {
        v.push_back(str);
    }

    for (auto &line : v) {
        istringstream iss(line);
        string w;
        while (iss >> w) {
            cout << w << endl;
        }
    }

    return 0;
}
