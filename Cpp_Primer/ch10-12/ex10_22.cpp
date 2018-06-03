#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using namespace std::placeholders;

bool f(const string &s, string::size_type sz) {
    return s.size() <= sz;
}

int main() {
    vector<string> strs{ "asdf", "sd", "adfadsfas" };
    cout << count_if(strs.cbegin(), strs.cend(), bind(f, _1, 6)) << endl;
    return 0;
}
