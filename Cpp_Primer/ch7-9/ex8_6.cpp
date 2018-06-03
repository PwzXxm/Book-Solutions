#include <fstream>
#include <iostream>
#include "ex8_6.h"

int main(int argc, char *argv[]) {
    
    std::ifstream in(argv[1]);

    Sales_data total;
    if (read(in, total)) {
        Sales_data trans;
        while (read(in, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    } else {
        std::cerr << "Invalid input" << std::endl;
    }
    

    return 0;
}
