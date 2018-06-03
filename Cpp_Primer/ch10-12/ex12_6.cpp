#include <new>
#include <iostream>
#include <memory>
#include <vector>
using std::cin, std::vector, std::cout, std::endl;


vector<int>* init() {
    vector<int>* vp = new vector<int>();
    return vp;
}

void read(vector<int>* vp) {
    int a;
    while (cin >> a) {
        vp->push_back(a);
    }
}


void print(vector<int>* vp) {
    for (auto elem : *vp) {
        cout << elem << endl;
    }
}


int main() {
    vector<int> *vp = init();

    read(vp);
    print(vp);

    delete vp;

    return 0;
}
