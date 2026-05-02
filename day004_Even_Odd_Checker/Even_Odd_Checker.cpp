#include <iostream>
#include <iomanip>
#include <string>


int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
		std::cout << i << ":even \n";

		}
		else if (i % 2 != 0) {
			std::cout << i << ":odd \n";
		}
	}

	std::cin.ignore();
	std::cin.get();
	return 0;
}