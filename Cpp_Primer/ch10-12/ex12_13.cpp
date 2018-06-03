#include <iostream>
#include <memory>
using namespace std;

int main()
{
    {
        auto sp = std::make_shared<int>();
        cout << sp.use_count() << endl;
        auto p = sp.get();
        cout << sp.use_count() << endl;
        delete p;
    }

    return 0;
}

