#include <iostream>
#include <vector>

template<typename Iter, typename Val>
auto find_t(Iter first, Iter last, Val const& val) {
    for (; (first != last && *first != val); ++first);
    return first;
}

int main() {
    std::vector<int> v = {1,2,3,4,5,6};
    std::cout << *(find_t(v.cbegin(), v.cend(), 3)) << std::endl;
    return 0;
}
