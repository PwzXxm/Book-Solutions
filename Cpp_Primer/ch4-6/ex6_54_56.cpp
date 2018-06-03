#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main() {

    vector<int (*)(int, int)> v{add, sub, mul, divide};

    int a = 6, b = 2;

    for (auto f : v) {
        cout << f(a, b) << endl;
    }

    return 0;
}
