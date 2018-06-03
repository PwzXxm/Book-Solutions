#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

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
    
    std::istringstream iss("test");
    func(iss);

    //inFile.close();

    return 0;
}
