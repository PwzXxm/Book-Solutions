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

bool check_size(const string &s, string::size_type sz) {
    return s.size() < sz;
}

int main() {
    vector<int> v {1,2,5,4,22,4,2,4};

    string s("123456");
    auto result = find_if(v.cbegin(), v.cend(), bind(check_size, s, _1));

    cout << *result << endl;

    return 0;
}
