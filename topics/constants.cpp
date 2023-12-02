#include <iostream>

/* 
Constants are used to store values that cannot be changed (read-only)
The const keyword is used to declare that a variable is a constant
This tells the compiler to prevent anything from modifying the variable
*/

int main()
{
    // Example Usage: Calculating the circumference of a circle
    const double PI = 3.14159;
    // PI = 4.21321421; // This is not allowed (the compiler will throw an error)

    double radius = 10.0;
    double circumference = 2 * PI * radius;

    std::cout << "Circumference: " << circumference << " cm" << '\n';

    return 0;
}