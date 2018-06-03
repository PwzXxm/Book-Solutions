#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    for (int i = 1; i <= 100; ++i) {
        v.push_back(i);
        std::cout << i << " " << v.capacity() << std::endl;
    }
    return 0;
}
