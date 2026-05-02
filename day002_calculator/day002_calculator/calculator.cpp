#include <iostream>
#include <iomanip>

// Day 2: Calculator Program
// This is my first attempt at a calculator program 

int main() {
	double number_one;
	double number_two;
	char user_operator;

	std::cout << "What is your first number? ";
	std::cin >> number_one;

	std::cout << "What is your opperand? (+, -, *, /): ";
	std::cin >> user_operator;

	std::cout << "What is your first number? ";
	std::cin >> number_two;

	switch (user_operator) {
		case '+':
			std::cout << "Answer: " << number_one + number_two << '\n';
			break;
		case '-':
			std::cout << "Answer: " << number_one - number_two << '\n';
			break;
		case '*':
			std::cout << "Answer: " << number_one * number_two << '\n';
			break;
		case '/':
			std::cout << "Answer: " << number_one / number_two << '\n';
			break;
		default:
			std::cout << "Invalid Operator!";
			break;
	}

	std::cin.ignore();
	std::cin.get();
	return 0;
}