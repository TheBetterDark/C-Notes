#include <iostream>

int main()
{
    // Declare variables
    int tries = 0; // Number of tries
    int guess; // User's guess


    // Initialize random seed
    srand(time(NULL));
    const int num = (rand() % 100) + 1; // Random number between 1 and 100

    // Print start of game line
    std::cout << "---------------- GUESS THE NUMBER ----------------\n";

    // Game loop
    do {
        // Display number of tries
        std::cout << "You have " << 7 - tries << " tries left.\n";

        // Ask the user to enter a number between 1 and 100
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> guess;

        // Check if user's guess is valid
        if (guess < 1 || guess > 100) {
            std::cout << "Invalid guess! The number must be between 1 and 100.\n";
            continue;
        }

        // Increment tries
        tries++;

        // Check if guess is correct and print out hint
        if (guess > num ) {
            std::cout << "Too high!\n";
        } else if (guess < num) {
            std::cout << "Too low!\n";
        } else {
            std::cout << "You win!\n";
            break;
        }

        // Check if user has run out of tries
        if (tries == 7) {
            std::cout << "You lose! The number was " << num << '\n';
            std::cout << "Better luck next time!\n";
            break;
        }

    } while (guess != num);

    // Print end of game line
    std::cout << "--------------------------------------------------\n";

    // Return 0 to indicate that the program has run successfully
    return 0;
}