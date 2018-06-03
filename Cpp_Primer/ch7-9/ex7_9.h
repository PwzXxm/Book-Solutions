#ifndef ex7_9_h
#define ex7_9_h

#include <string>
#include <iostream>

struct Person {
    std::string const& get_name() const { return name; }
    std::string const& get_addr() const { return address; }

    std::string name;
    std::string address;

};

std::istream &read(std::istream &is, Person &p) {
    return is >> p.name >> p.address;
}

std::ostream &print(std::ostream &os, const Person &p) {
    return os << p.name << p.address;
}

#endif
