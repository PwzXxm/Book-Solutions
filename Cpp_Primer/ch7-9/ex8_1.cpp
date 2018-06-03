#include <iostream>
#include <fstream>
#include <string>

std::istream& func(std::istream &is) {
    std::string buf;
    while (is >> buf) {
        std::cout << buf << std::endl;
    }
    is.clear();
    return is;
}

int main() {
    //std::ifstream inFile;

    //inFile.open("test");

    //std::string str;
    //func(inFile) >> str;
    
    std::istream& is = func(std::cin);
    std::cout << is.rdstate() << std::endl;

    //inFile.close();

    return 0;
}
