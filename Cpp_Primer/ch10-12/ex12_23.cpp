#include <string>
#include <iostream>

int main() {
    const char *a = "Wow";
    const char *b = "Huh";

    char *p = new char[15]();
    std::strcat(p, a);
    std::strcat(p, b);
    std::cout << p << std::endl;
    delete [] p;



    return 0;
}
