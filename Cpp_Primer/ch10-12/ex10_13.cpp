#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool isGreaterThanFive(const string &s) {
    return s.size() >= 5;
}

int main() {
    vector<string> v { "hello", "a", "concentrate", "cd" };

    auto m = partition(v.begin(), v.end(), isGreaterThanFive);

    for (auto it = v.begin(); it != m; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = m; it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;



    return 0;
}
