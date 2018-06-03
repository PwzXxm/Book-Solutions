#include<string>

class Person {
	std::string name;
	std::string address;

	const std::string& getName() const { return name; }
	const std::string& getAddress() const { return address; }
}

std::istream &read(std::istream &is, Person &person) {
	return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os, const Person &person) {
	return os << person.name << " " << person.address;
}
