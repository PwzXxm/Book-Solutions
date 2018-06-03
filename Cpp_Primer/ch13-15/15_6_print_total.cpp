#include <iostream>
#include <string>
#include "15_3_Quote.h"
#include "15_5_Bulk.h"

double print_total(std::ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << "$ sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

int main() {
    Quote q("book", 10.0);
    Bulk_quote bq("text", 5.9, 10, 0.2);

    print_total(std::cout, q, 4);
    print_total(std::cout, bq, 12);
}
