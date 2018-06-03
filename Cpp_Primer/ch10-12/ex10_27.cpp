#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::vector<int> v { 1, 1, 3, 3, 6 };
    std::list<int> lst;

    unique_copy(v.cbegin(), v.cend(), back_inserter(lst));

    for (auto e : lst) {
        std::cout << e << " ";
    }

    std::cout << std::endl;

    return 0;
}
