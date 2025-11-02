#include <iostream>
#include <string>
#include <vector>

#include "Casting.hpp"
#include "DebugFunctions.hpp"
#include "Operations.hpp"
#include "Utils.hpp"

int main() {
	std::string firstNumber;
	std::string secondNumber;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	for (std::size_t i = 0; i < firstNumber.length(); i++) {
		if (firstNumber[i] != '0' && firstNumber[i] != '1') {
			return 401;
		}
	}

	for (std::size_t i = 0; i < secondNumber.length(); i++) {
		if (secondNumber[i] != '0' 
			&& secondNumber[i] != '1'
			&& secondNumber[i] != '2'
			&& secondNumber[i] != '3'
			&& secondNumber[i] != '4'
			&& secondNumber[i] != '5'
			&& secondNumber[i] != '6'
			&& secondNumber[i] != '7'
			&& secondNumber[i] != '8'
			&& secondNumber[i] != '9'
			&& secondNumber[i] != 'A'
			&& secondNumber[i] != 'B'
			&& secondNumber[i] != 'C'
			&& secondNumber[i] != 'D'
			&& secondNumber[i] != 'E'
			&& secondNumber[i] != 'F'
		) {
			return 402;
		}
	}

	secondNumber = Utils::from16to2(secondNumber);

	std::cout << firstNumber << '\t' << secondNumber << std::endl;

	auto resultPlus = Operations::plus(firstNumber, secondNumber);
	auto resultMultiply = Operations::multiply(firstNumber, secondNumber);
	auto resultMinus = Operations::minus(firstNumber, secondNumber);
	auto resultDivide = Operations::divide(firstNumber, secondNumber);

	std::cout << "Result of plus is " << resultPlus << "." << std::endl;
	std::cout << "Result of multiply is " << resultMultiply << "." << std::endl;
	std::cout << "Result of minus is " << resultMinus << "." << std::endl;
	std::cout << "Result of divide is " << resultDivide << "." << std::endl;

	return 0;
}