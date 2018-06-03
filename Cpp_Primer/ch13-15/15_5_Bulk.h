#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "15_3_Quote.h"
#include <string>

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book, double price, std::size_t qty, double dis) : Quote(book, price), min_qty(qty), discount(dis) {}
    double net_price(std::size_t) const override;
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};
#endif
