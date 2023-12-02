#include <iostream>

int main()
{

    // pseudo-random number generator = NOT truly random

    // Initialize random seed
    srand(time(NULL));

    // Generate random number between 1 and 6, 3 times
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    // Print out random numbers
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    // Return 0 to indicate that the program has run successfully
    return 0;
}