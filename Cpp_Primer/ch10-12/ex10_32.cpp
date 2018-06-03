#include <iostream>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include "../include/Sales_item.h"

using namespace std;

int main() {
    istream_iterator<Sales_item> in_iter(cin), eos;
    vector<Sales_item> v;

    while (in_iter != eos) {
        v.push_back(*in_iter++);
    }

    sort(v.begin(), v.end(), compareIsbn);

    for (auto beg = v.cbegin(), to = beg; beg != v.cend(); ++beg, beg = to) {
        to = find_if(beg, v.cend(), [beg](const Sales_item &a) {
                    return a.isbn() != beg->isbn();
                });
        accumulate(beg, to, Sales_item(beg->isbn()));
    }
}
