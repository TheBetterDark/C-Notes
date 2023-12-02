#include <iostream>

int main()
{
    // Declare variables
    double temp;
    char unit;

    // Display the title
    std::cout << "---------------- Temperature Converter ----------------\n";
    std::cout << "Fahrenheit = F | Celsius = C\n";

    // Ask the user to enter a unit
    std::cout << "Enter a unit: ";
    std::cin >> unit;

    // Check if the unit is Fahrenheit
    if (unit == 'F' || unit == 'f')
    {
        // Ask the user to enter the temperature in Celsius
        std::cout << "Enter the Temperature in Celsius: ";
        std::cin >> temp;

        // Convert the temperature from Celsius to Fahrenheit
        temp = (temp * 1.8) + 32.0;

        // Display the temperature in Fahrenheit
        std::cout << "The Temperature in Fahrenheit is: " << temp << " F" << '\n';
    }
    else if (unit == 'C' || unit == 'c') // Check if the unit is Celsius
    {
        std::cout << "Enter the Temperature in Fahrenheit: ";
        std::cin >> temp;

        // Convert the temperature from Fahrenheit to Celsius
        temp = (temp - 32.0) / 1.8;

        // Display the temperature in Celsius
        std::cout << "The Temperature in Celsius is: " << temp << " C" << '\n';
    }
    else // If the unit is not Fahrenheit or Celsius
    {
        // Display an error message
        std::cout << "You entered an invalid unit!\n";
    }

    // Display the end of the converter
    std::cout << "-------------------------------------------------------\n";

    return 0;
}