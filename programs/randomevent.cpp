#include <iostream>
#include <ctime>

int main()
{

    // Initialize random seed
    srand(time(0));
    int randNum = (rand() % 5) + 1;

    // Switch statement to print random event
    switch (randNum)
    {
    case 1:
        std::cout << "You will get a new job soon!\n";
        break;
    case 2:
        std::cout << "You will get a new car soon!\n";
        break;
    case 3:
        std::cout << "You will get a new house soon!\n";
        break;
    case 4:
        std::cout << "You will get a new pet soon!\n";
        break;
    case 5:
        std::cout << "You will get a new friend soon!\n";
        break;
    default:
        std::cout << "Something went wrong!\n";
        break;
    }

    // Return 0 to indicate that the program has run successfully
    return 0;
}