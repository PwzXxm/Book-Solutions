#ifndef ex7_4_5_h
#define ex7_4_5_h

#include <string>

class Person {
    std::string name;
    std::string address;

    std::string get_name() const& { return name; }
    std::string get_addr() const& { return address; }
};

#endif
