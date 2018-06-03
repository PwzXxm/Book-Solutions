#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    pair<int, int> p12(1, 2);
    pair<int, int> p11(1, 1);
    pair<int, int> p22(2, 2);
    pair<int, int> p23(2, 3);
    pair<int, int> p21(2, 1);


    // false
    cout << (p12 < p11) << endl;

    // true
    cout << (p12 < p21) << endl;

    // fasle
    cout << (p12 < p11) << endl;

    // false
    cout << (p11 < p11) << endl;

    // false
    cout << (p21 < p12) << endl;

    // true
    cout << (p21 < p22) << endl;

    return 0;
}
