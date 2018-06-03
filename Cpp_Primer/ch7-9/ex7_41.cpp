#include "ex7_41.h"
#include <iostream>
using std::endl, std::cout;



int main(void) {
    Sales_data a;
    print(cout, a) << endl;

    Sales_data b("abc");
    print(cout, b) << endl;

    Sales_data c("abc", 1, 2.3);
    print(cout, c) << endl;

    Sales_data d(std::cin);
    print(cout, d) << endl;
}
