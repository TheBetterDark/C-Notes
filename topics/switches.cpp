#include <iostream>

/*
Alternative to usiing  many else if statements
comparing one value against matching cases.
*/

int main()
{
    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    // Switch statement to display the month
    switch (month)
    {
    case 1:
        // Run this code if month == 1
        std::cout << "January\n";
        break;
    case 2:
        // Run this code if month == 2
        std::cout << "February\n";
        break;
    case 3:
        // Run this code if month == 3
        std::cout << "March\n";
        break;
    case 4:
        // Run this code if month == 4
        std::cout << "April\n";
        break;
    case 5:
        // Run this code if month == 5
        std::cout << "May\n";
        break;
    case 6:
        // Run this code if month == 6
        std::cout << "June\n";
        break;
    case 7:
        // Run this code if month == 7
        std::cout << "July\n";
        break;
    case 8:
        // Run this code if month == 8
        std::cout << "August\n";
        break;
    case 9:
        // Run this code if month == 9
        std::cout << "September\n";
        break;
    case 10:
        // Run this code if month == 10
        std::cout << "October\n";
        break;
    case 11:
        // Run this code if month == 11
        std::cout << "November\n";
        break;
    case 12:
        // Run this code if month == 12
        std::cout << "December\n";
        break;
    default:
        // Run this code if none of the above conditions were met
        std::cout << "Invalid month\n";
        break;
    }

    return 0;
}