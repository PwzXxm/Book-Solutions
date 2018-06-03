#include <iostream>
#include <string>

std::istream& f(std::istream &is) {
	std::string buf;
	while (is >> buf) std::cout << buf << std::endl;
	is.clear();
	return is;
}

int main(void) {
	f(std::cin);
	std::cout << std::endl;
	char c;

	while(std::cin >> c)
		std::cout << c;

	return 0;
}
