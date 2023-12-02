#include <iostream>

// Ternary operator ?: = replcement to an if-else statement
// Syntax: condition ? expression1 : expression2

int main()
{
    // Example 1 (ternary operator)
    int grade = 75;
    grade >= 60 ? std::cout << "Passed\n" : std::cout << "Failed\n";

    // Example 2
    bool hungry = true;
    hungry ? std::cout << "You are hungry.\n" : std::cout << "You are Full.\n";

    // Example 3 (nested ternary operator)
    int number = 9;
    std::cout << (number % 2 ? "Even\n" : "Odd\n");

    // Example 4
    int num1 = 5, num2 = 10;
    std::cout << (num1 > num2 ? num1 : num2) << " is larger.\n";

    return 0;
}