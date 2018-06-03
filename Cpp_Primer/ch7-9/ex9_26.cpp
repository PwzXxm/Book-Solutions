#include <iostream>
#include <vector>
#include <list>
using std::vector, std::list, std::cout, std::endl;

int main() {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

    vector<int> v(std::begin(ia), std::end(ia));
    list<int> l(std::begin(ia), std::end(ia));

    for (auto it = v.begin(); it != v.end(); ) {
        if (!(*it & 0x1)) it = v.erase(it);
        else it++;
    }

    for (auto it = l.begin(); it != l.end(); ) {
        if (*it & 0x1) it = l.erase(it);
        else it++;
    }

    for (auto elem : v) {
        cout << elem << " ";
    }
    cout << endl;

    for (auto elem : l) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
