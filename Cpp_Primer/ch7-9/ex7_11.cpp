#include <iostream>
#include "ex7_11.h"

int main() {
    Sales_data i;
    print(std::cout, i) << std::endl;

    Sales_data j("0P-asdf");
    print(std::cout, j) << std::endl;

    Sales_data k("as-df23", 1, 3.4);
    print(std::cout, k) << std::endl;

    Sales_data l(std::cin);
    print(std::cout, l) << std::endl;
    return 0;
}
