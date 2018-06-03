#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iterator>

using namespace std;

int main() {
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, "\n");

    vector<int> v;

    copy(in_iter, eof, back_inserter(v));

    sort(v.begin(), v.end());

    unique_copy(v.cbegin(), v.cend(), out_iter);

    return 0;
}
