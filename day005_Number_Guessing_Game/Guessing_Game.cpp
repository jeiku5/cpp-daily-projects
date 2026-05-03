#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>

int main() {
	int guess = 0;
	int random_num;
	int difference;

	std::cout << "Generating a random number...\n";
	srand(time(0)); // Sets starting point based on current time
	random_num = rand() % 100 + 1; // generates a random number and shrinks with remainder 0-99 + 1
	std::cout << "Try guessing the random number between 1-100: \n";
	
	while (random_num != guess) {
		std::cin >> guess;
		if (random_num == guess) {
			std::cout << "Congratulations! You guessed the correct number: " << random_num;
			break;
		}
		else if (guess > 100 || guess < 1) {
			std::cout << "I said guess between 1-100, you guessed \n" << guess;

		}
		else {
			difference = abs(guess - random_num);
			std::cout << "You guessed incorrectly, you are " << difference << " numbers away\n";
		}
	}
	std::cin.ignore();
	std::cin.get();
	return 0;
}