#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main() {
    vector<int> v{ 1,2,3,4,4,3,5,3,4,5 };
    list<string> l{ "adsf", "k;l" };

    cout << count(v.cbegin(), v.cend(), 3) << endl;

    cout << count(l.cbegin(), l.cend(), "a") << endl;

    return 0;
}
