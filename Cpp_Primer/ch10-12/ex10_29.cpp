#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iterator>

using namespace std;

int main() {
    ifstream in("./data/setofstrings.input");
    istream_iterator<string> in_iter(in), eof;
    ostream_iterator<string> out_iter(cout, "\n");

    vector<string> v;

    copy(in_iter, eof, back_inserter(v));

    copy(v.cbegin(), v.cend(), out_iter);

    return 0;
}
