#include <iostream>
#include <typeinfo>
#include <map>

int main() {
    std::map<int, double> m = {{ 1, 'a' }, { 2, 'b'}};
    using KeyType = std::map<int, double>::key_type;

    std::cout << typeid(KeyType).name() << std::endl;
    std::cout << typeid(decltype(m[0])).name() << std::endl;

    return 0;
}
