#include <iostream>

/*
Do something if a condition is true.
If the condition is false, don't do it or do something else.
*/

int main()
{
    const int legalDrivingAge = 16;
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Checking if condition is true
    if (age >= legalDrivingAge)
    {
        std::cout << "You are old enough to drive.\n";
    }
    else if (age < 0) // If first statement is not true
    {
        std::cout << "You haven't been born yet."
    }
    else // If both statements are not true
    {
        std::cout << "You are not old enough to drive.\n";
    }

    return 0;
}