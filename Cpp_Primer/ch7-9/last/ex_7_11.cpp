#include "ex_7_11.h"

int main(void) {
	Sales_data item1;
	print(std::cout, item1) << std::endl;

	Sales_data item2("1k1k1k1k");
	print(std::cout, item2) << std::endl;

	Sales_data item3("1k1k1k1k", 3, 10.0);
	print(std::cout, item3) << std::endl;

	Sales_data item4(std::cin);
	print(std::cout, item4) << std::endl;

	return 0;
}
