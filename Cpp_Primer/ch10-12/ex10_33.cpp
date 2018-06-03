#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <fstream>

using std::string, std::vector;

int main() {
    std::ifstream in_file("./data/integers.in");
    std::ofstream odd_out_file("ex10_33_odd.out");
    std::ofstream even_out_file("ex10_33_even.out");
    std::istream_iterator<int> in_iter(in_file), eos;
    std::ostream_iterator<int> odd_out_iter(odd_out_file, " "), even_out_iter(even_out_file, "\n");

    vector<int> v;

    while (in_iter != eos) v.push_back(*in_iter++);

    for (auto e : v) {
        *(e & 0x1 ? odd_out_iter : even_out_iter)++ = e;
    }

    return 0;
}
