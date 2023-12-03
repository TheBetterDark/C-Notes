#include <iostream>

char getPlayerChoice();
char getComputerChoice();
std::string showChoice(char choice);

int main()
{
    int rounds;
    int playerWins = 0;
    int computerWins = 0;

    std::cout << "---=== Rock, Paper, Scissors ===---\n";
    std::cout << "How many rounds would you like to play: ";
    std::cin >> rounds;
    std::cout << "---=============================---\n";

    for (int i = 1; i <= rounds; i++)
    {
        std::cout << "---========== Round " << i << " ==========---" << '\n';
        std::cout << "---=============================---\n";
        std::cout << "Current Scores:\n" << "Player: " << playerWins << "\nComputer: " << computerWins << '\n';
        std::cout << "---=============================---\n";

        char playerChoice = getPlayerChoice();
        std::cout << "You chose: " << showChoice(playerChoice) << '\n';
        std::cout << "---=============================---\n";

        char computerChoice = getComputerChoice();
        std::cout << "Computer chose: " << showChoice(computerChoice) << '\n';
        std::cout << "---=============================---\n";

        switch (playerChoice)
        {
        case 'r':
            if (computerChoice == 'r')
            {
                std::cout << "Tie.\n";
            }
            else if (computerChoice == 'p')
            {
                std::cout << "Computer has won this round.\n";
                computerWins += 1;
            }
            else
            { // s
                std::cout << "Player has won this round.\n";
                playerWins += 1;
            }
            break;
        case 'p':
            if (computerChoice == 'p')
            {
                std::cout << "Tie.\n";
            }
            else if (computerChoice == 's')
            {
                std::cout << "Computer has won this round.\n";
                computerWins += 1;
            }
            else
            { // r
                std::cout << "Player has won this round.\n";
                playerWins += 1;
            }
            break;
        case 's':
            if (computerChoice == 's')
            {
                std::cout << "Tie.\n";
            }
            else if (computerChoice == 'r')
            {
                std::cout << "Computer has won this round.\n";
                computerWins += 1;
            }
            else
            { // p
                std::cout << "Player has won this round.\n";
                playerWins += 1;
            }
            break;
        }
        std::cout << "---=============================---\n";
    }

    if (playerWins > computerWins)
    {
        std::cout << "Player has WON the game!\n";
    }
    else if (computerWins > playerWins)
    {
        std::cout << "Computer has WON the game!\n";
    }
    else
    {
        std::cout << "It's a TIE!\n";
    }

    std::cout << "---=============================---\n";
    std::cout << "Final Scores:\n" << "Player: " << playerWins << "\nComputer: " << computerWins << '\n';
    std::cout << "---=============================---\n";

    return 0;
}

char getPlayerChoice()
{
    char choice;
    std::cout << "'r' for  Rock | 'p' for Paper | 's' for scissors\n";
    std::cout << "Enter a choice: ";
    std::cin >> choice;
    return choice;
}

char getComputerChoice()
{
    // Initialize random seed
    srand(time(0));
    int randNum = rand() % 3 + 1;

    switch (randNum)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}

std::string showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        return "Rock";
    case 'p':
        return "Paper";
    case 's':
        return "Scissors";
    }

    return 0;
}