#include <iostream>
#include <string>

int main()
{
    std::string name;

    // This will loop until the user enters something other than an empty string
    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello, " << name << '\n';

    // Infinite loop (This will loop forever unless you terminate the program)
    /*
    while (true)
    {
        std::cout << "Hello, world!";
    }
    */

    // Do-while loop = doo some code, then repeat again if the condition is true
    int number;

    do
    {
        std::cout << "Enter a positive: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "You entered: " << number << '\n';

    // For loop
    // for (initialization; condition; increment) {}
    for (int i = 0; i <= 10; i++)
    { // You can also use i-- or i += 2 or i -= 2 or i *= 2 or i /= 2 etc.
        std::cout << "The value of i is: " << i << '\n';
    }
    std::cout << "We reached the end of the loop!";

    // Break - Used to break out of a loop
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        std::cout << "The value of i is: " << i << '\n';
    }

    // Continue - Used to skip the rest of the loop and continue with the next iteration
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        std::cout << "The value of i is: " << i << '\n';
    }

    // Nested loops - A loop inside another loop
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}