#include <fstream>
#include <iostream>
#include "ex8_6.h"

int main(int argc, char *argv[]) {
    
    std::ifstream in;
    std::ofstream out;

    if (argc > 2) {
        in.open(argv[1]);
        out.open(argv[2]);
    } else {
        std::cerr << "Please add input and output files" << std::endl;
        return -1;
    }

    Sales_data total;
    if (read(in, total)) {
        Sales_data trans;
        while (read(in, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(out, total) << std::endl;
                total = trans;
            }
        }
        print(out, total) << std::endl;
    } else {
        std::cerr << "Invalid input" << std::endl;
    }
    
    in.close();
    out.close();

    return 0;
}
