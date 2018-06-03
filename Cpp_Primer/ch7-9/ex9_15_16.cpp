#include <list>
#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl, std::list;

int main() {
    vector<int> v1{1,2,3,4};
    vector<int> v2{1,2,3};

    list<int> l{1,2,3};

    cout << ((vector<int>(l.cbegin(), l.cend()) == v2) ? "T" : "F" )<< endl;
    return 0;
}
