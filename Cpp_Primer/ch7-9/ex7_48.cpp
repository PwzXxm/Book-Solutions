// #include "ex7_48.h"
#include "ex7_48_explicit.h"
#include <string>
#include <iostream>
using std::cout, std::string;

int main() {
    string null_isbn("9-999-99999-9");

    Sales_data item1(null_isbn);

    Sales_data item2("9-999-99999-9");

    return 0;
}
