#include <iostream>
#include <cmath> // For math functions

/*
Basic Math Functions:
    std::max(x, y) = Returns the largest of the two numbers
    std::min(x, y) = Returns the smallest of the two numbers
    std::pow(x, y) = Returns the first number raised to the second number
    std::sqrt(x) = Returns the square root of the number
    std::abs(x) = Returns the absolute value of the number
    std::round(x) = Rounds the number to the nearest integer
    std::ceil(x) = Rounds the number up to the nearest integer
    std::floor(x) = Rounds the number down to the nearest integer
*/

int main()
{
    double x = 3.99;
    double y = 4.0;
    double z;

    // Max and min functions (returns the largest/smallest of the two numbers)
    z = std::max(x, y);
    std::cout << "z = " << z << '\n';

    z = std::min(x, y);
    std::cout << "z = " << z << '\n';

    // Power function (returns the first number raised to the second number)
    z = std::pow(2, 4);
    std::cout << "z = " << z << '\n';

    // Square root function (returns the square root of the number)
    z = std::sqrt(9);
    std::cout << "z = " << z << '\n';

    // Absolute value function (returns the absolute value of the number)
    z = std::abs(-3);
    std::cout << "z = " << z << '\n';

    // Round function (rounds the number to the nearest integer)
    z = std::round(x);
    std::cout << "z = " << z << '\n';

    // Ceil function (rounds the number up to the nearest integer)
    z = std::ceil(x);
    std::cout << "z = " << z << '\n';

    // Floor function (rounds the number down to the nearest integer)
    z = std::floor(x);
    std::cout << "z = " << z << '\n';

    return 0;
}