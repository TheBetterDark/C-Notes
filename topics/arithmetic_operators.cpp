#include <iostream>

/*
Returns the result of  specific arithmetic operation (+ - * / %)
*/

int main()
{
    int students = 20;

    // Addition
    // This is the long way of writing this
    students = students + 1;
    std::cout << "Students: " << students << "\n";

    // This is the short way of writing this
    students += 1;
    std::cout << "Students: " << students << "\n";

    // Increment operator (This will add 1 to the variable)
    students++;
    std::cout << "Students: " << students << "\n";

    // Subtraction
    // This is the long way of writing this
    students = students - 1;
    std::cout << "Students: " << students << "\n";

    // This is the short way of writing this
    students -= 1;
    std::cout << "Students: " << students << "\n";

    // Decrement operator (This will subtract 1 from the variable)
    students--;
    std::cout << "Students: " << students << "\n";

    // Multiplication
    // This is the long way of writing this
    students = students * 2;
    std::cout << "Students: " << students << "\n";

    // This is the short way of writing this
    students *= 2;
    std::cout << "Students: " << students << "\n";

    // Division

    // Since we are using integers, the result will be rounded down to the nearest integer
    // This is the long way of writing this
    students = students / 3;
    std::cout << "Students: " << students << "\n";

    // This is the short way of writing this
    students /= 3;
    std::cout << "Students: " << students << "\n";

    // This allows the variable to retain its decimal value
    double students2 = 20.0;
    students2 /= 3.0;
    std::cout << "Students: " << students2 << "\n";

    // Modulus (Remainder)
    int remainder = students % 2; // This will return 0 if the number is divisible by 2 (This can be used to check if a number is even or odd)
    std::cout << "Students: " << remainder << "\n";

    // Order of operations
    // Parentheses, Division, Multiplication, Addition, Subtraction
    int total = (6 + 4) * 10 / 2; // This will return 50
    std::cout << "Total: " << total << "\n";

    return 0;
}