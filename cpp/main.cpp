#include <iostream>
#include "calculator.h"

double getNumber(bool floatOrNot) {
    if (floatOrNot) {
        double tmpNumber;
        std::cout << "Enter a float number: ";
        while (!(std::cin >> tmpNumber)) {
            std::cout << "Invalid input. Please enter a float: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        return tmpNumber;
    } else {
        int tmpNumber;
        std::cout << "Enter an integer number: ";
        while (!(std::cin >> tmpNumber)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        return tmpNumber;
    }
}

int main(){
    std::cout << "Is your first number a float? Enter 1 for true, 0 for false: ";
    bool isFloatOne;
    std::cin >> isFloatOne;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    double firstNumber = getNumber(isFloatOne);

    std::cout << "Is your second number a float? Enter 1 for true, 0 for false: ";
    bool isFloatTwo;
    std::cin >> isFloatTwo;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    double secondNumber = getNumber(isFloatTwo);

    std::cout << "Enter the operation you want to perform (+, -, *, /, %): ";
    char operation;
    std::cin >> operation;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    double result;
    switch (operation) {
        case '+':
            result = addition(firstNumber, secondNumber);
            break;
        case '-':
            result = subtraction(firstNumber, secondNumber);
            break;
        case '*':
            result = multiplication(firstNumber, secondNumber);
            break;
        case '/':
            result = division(firstNumber, secondNumber);
            break;
        case '%':
            result = modulus(firstNumber, secondNumber);
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            return 1;
    }
    std::cout << "Result: " << result << std::endl;
    return 0;
}
