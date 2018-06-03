#include <iostream>
#include <list>
#include <array>
#include <vector>
#include <string>

using std::list, std::endl, std::cout, std::vector, std::string;

int main() {
    list<const char *> lst { "abc", "bcd" };

    vector<string> v;

    v.assign(lst.begin(), lst.end());

    for (auto s : v) {
        cout << s << endl;
    }

    return 0;
}
