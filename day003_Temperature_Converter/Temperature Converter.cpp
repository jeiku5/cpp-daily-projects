#include <iostream>
#include <iomanip>
#include <string>


// My First Temperature Converter; planning to use formula: F -> C = (F-32) * 5/9 | C -> F = (C*1.8) + 32
int main() {
	double celsius;
	double fahrenheit;
	char type;

	while (true) {
		std::cout << "Would you like to convert to Fahrenheit or Celsius? (Type F or C): ";
		std::cin >> type;

		if (type == 'F' || type == 'f') {
		std::cout << "What is your degree in Celsius?: ";
		std::cin >> celsius;
		fahrenheit = (celsius * 1.8) + 32;
		std::cout << "Your degree in fahrenheit is: " << fahrenheit;
		break;
		}
		else if(type == 'C' || type == 'c'){
			std::cout << "What is your degree in Fahrenheit?: ";
			std::cin >> fahrenheit;
			celsius = (fahrenheit - 32) * (5.0 / 9.0);
			std::cout << "Your degree in celsius is: " << celsius;
			break;
		}
		else
			std::cout << "Wrong character entered, please input 'C' or 'F': \n";
	}

	std::cin.ignore();
	std::cin.get();
	return 0;
}