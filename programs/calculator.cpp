#include <iostream>

int main()
{
    // Declare variables
    char op;
    double num1, num2, result;

    // Display the calculator title
    std::cout << "---------------- Calculator ----------------\n";

    // Ask the user to enter an operator
    std::cout << "Enter an operator (+, -, *, /): ";

    // Store the operator input
    std::cin >> op;

    // Ask the user to enter the first number
    std::cout << "Enter #1: ";

    // Store the first number input
    std::cin >> num1;

    // Ask the user to enter the second number
    std::cout << "Enter #2: ";

    // Store the second number input
    std::cin >> num2;

    // Switch statement to perform calculation based on user input
    switch (op)
    {
    case '+': // Display the result if op == '+'
        result = num1 + num2;
        std::cout << "The result is: " << result << '\n';
        break;
    case '-': // Display the result if op == '-'
        result = num1 - num2;
        std::cout << "The result is: " << result << '\n';
        break;
    case '*': // Display the result if op == '*'
        result = num1 * num2;
        std::cout << "The result is: " << result << '\n';
        break;
    case '/': // Display the result if op == '/'
        result = num1 / num2;
        std::cout << "The result is: " << result << '\n';
        break;
    default: // Display error if the operator is invalid
        std::cout << "Invalid operator\n";
        break;
    }

    // Display the end of the calculator
    std::cout << "--------------------------------------------\n";

    return 0;
}