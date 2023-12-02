#include <iostream>
#include <cmath>

int main()
{
    // Declare variables
    double a, b, c; // a = side a, b = side b, c = hypotenuse

    // Ask the user to enter the length of side a
    std::cout << "Enter the length of side a: ";
    std::cin >> a;

    // Ask the user to enter the length of side b
    std::cout << "Enter the length4 of side b: ";
    std::cin >> b;

    // Calculate the length of the hypotenuse
    c = sqrt(pow(a, 2) + pow(b, 2));

    // Display the length of the hypotenuse
    std::cout << "The length of the hypotenuse is: " << c << '\n';

    // Return 0 to indicate that the program has run successfully
    return 0;
}