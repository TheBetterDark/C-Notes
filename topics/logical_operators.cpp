#include <iostream>

// Logical operators: &&, ||, !
// && = and - both conditions must be true
// || = or - one of the conditions must be true
// ! = not - reverses the logical state of its operand

int main()
{
    int temp;
    bool is_sunny = true;

    std::cout << "Enter the temperature (Celsius): ";
    std::cin >> temp;

    if (temp > 10 && temp < 30) // && = and (both conditions must be true) - if the temperature is between 10 and 30 degrees
    {
        std::cout << "The temperature is good!\n";
    }
    else
    {
        std::cout << "The temperature is bad!\n";
    }

    if (!is_sunny) // ! = not (reverses the logical state of its operand) - true becomes false and vice versa
    {
        std::cout << "It is not sunny!\n";
    }
    else
    {
        std::cout << "It is sunny!\n";
    }

    if (temp > 10 || is_sunny) // || = or (one of the conditions must be true) - if the temperature is above 10 degrees or if it is sunny
    {
        std::cout << "It is a good day!\n";
    }
    else
    {
        std::cout << "It is a bad day!\n";
    }

    return 0;
}