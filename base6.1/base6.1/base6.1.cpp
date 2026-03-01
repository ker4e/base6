#include <iostream>
#include "myMath.h"

int main() {

	int numOper{};
	do {
		std::cout << "Available operations! \n" <<
			"1. Addition\n" <<
			"2. Subtraction\n" <<
			"3. Multiplication\n" <<
			"4. Division\n" <<
			"5. Exponentiation\n\n" <<
			"Select an operation: ";
		std::cin >> numOper;
		if (numOper <= 0 || numOper >= 6) {
			std::cout << "Operation missing! Please try again!\n\n";
		}
	} while (numOper <= 0 || numOper >= 6);

	if (numOper >= 1 && numOper <= 3) {
		double first{};
		double second{};

		std::cout << "Enter the first number: ";
		std::cin >> first;
		std::cout << "Enter the second number: ";
		std::cin >> second;

		switch (numOper) {
		case 1:
			std::cout << first << " + " << second << " = " << add(first, second);
			break;
		case 2:
			std::cout << first << " - " << second << " = " << sub(first, second);
			break;
		case 3:
			std::cout << first << " * " << second << " = " << mult(first, second);
			break;
		}
	}
	else if (numOper == 4) {
		double first{};
		double second{};

		std::cout << "Enter the first number: ";
		std::cin >> first;

		do {
			std::cout << "Enter the second number: ";
			std::cin >> second;

			if (second == 0) {
				std::cout << "Error! Division by zero!\n";
			}
		} while (second == 0);

		std::cout << first << " / " << second << " = " << divide(first, second);
	}

	else {
		double first{};
		int second{};

		std::cout << "Enter the first number: ";
		std::cin >> first;
		std::cout << "Enter the second number (integer): ";
		std::cin >> second;

		std::cout << first << " ^ " << second << " = " << power(first, second);
	}

	return EXIT_SUCCESS;
}