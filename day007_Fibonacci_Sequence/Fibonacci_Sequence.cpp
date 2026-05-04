#include <iostream>
#include <iomanip>
#include <string>

int main() {
	int fibonacci = 0;
	int N;
	int temp_1 = 0;
	int temp_2 = 1;
	int new_i;
	std::cout << "What is your Fibonacci Sequence in 'N'?: ";
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		if (i > 0) {
			std::cout << ", ";
		}
		if(i == 0){
			temp_1 = i;
			std::cout << temp_1;
		}
		else if (i == 1) {
			temp_2 = i;
			std::cout << temp_2;
		}
		else {
			new_i = temp_1 + temp_2;
			std::cout << new_i;
			temp_1 = temp_2;
			temp_2 = new_i;
		}
	}

	std::cin.ignore();
	std::cin.get();
	return 0;
}