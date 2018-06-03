#include <memory>
#include <iostream>
#include <vector>
using std::vector;

using Sptr = std::shared_ptr<vector<int>>;

Sptr init() {
    return std::make_shared<vector<int>>();
}

void read(Sptr p) {
    int a;
    while (std::cin >> a) {
        p->push_back(a);
    }
}

std::ostream& print(Sptr p) {
    for (auto elem : *p) {
        std::cout << elem << std::endl;
    }
    return std::cout;
}

int main() {
    Sptr sp = init();
    read(sp);
    print(sp);
    return 0;
}
