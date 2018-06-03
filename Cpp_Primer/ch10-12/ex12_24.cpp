#include <iostream>

int main(void) {
    int sz = 0;
    std::cin >> sz;

    char *p = new char[sz+1]();

    std::cin.ignore();
    std::cin.get(p, sz+1);
    std::cout << p << std::endl;

    delete [] p;

    return 0;
}
