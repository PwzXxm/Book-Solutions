#include <memory>
#include <iostream>

int main() {
    int n = 3;
    std::allocator<std::string> alloc;
    std::allocator<std::string>::pointer const p = alloc.allocate(n);

    std::string s;
    std::string *q = p;

    while (std::cin >> s && q != p+n) {
        alloc.construct(q++, s);
    }

    std::cout << *p << std::endl;

    while (q != p) {
        alloc.destroy(--q);
    }

    alloc.deallocate(p, n);

    return 0;
}
