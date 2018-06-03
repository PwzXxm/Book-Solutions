#include <iostream>
#include <vector>
#include <algorithm>

class Cmp {
public:
    Cmp(int val) : v(val) {}
    bool operator() (const int elem) {
        return elem == v;
    }
private:
    int v;
};

int main() {
    std::vector v = { 1,2,3,4,5,6,7 };
    std::replace_if(v.begin(), v.end(), Cmp(3), 0);

    for (auto e : v) {
        std::cout << e << std::endl;
    }


    return 0;
}
