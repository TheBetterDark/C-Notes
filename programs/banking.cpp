#include <iostream>
#include <iomanip>

// Function declarations
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    // Variable declarations
    double balance = 500;
    int choice = 0;

    // Display menu
    std::cout << "---=== Banking Program ===---\n";

    // Process user input
    do
    {
        // Get user choice
        std::cout << "---======================---\n";
        std::cout << "1. Show balance\n2. Deposit\n3. Withdraw\n4. Quit\n";
        std::cout << "---======================---\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << "---======================---\n";

        // This is to prevent infinite loop if user enters a non-integer
        std::cin.clear(); // Clear cin error flags
        fflush(stdin);    // Clear cin buffer

        // Process user choice
        switch (choice)
        {
        case 1: // Show balance
            showBalance(balance);
            break;
        case 2: // Deposit into balance
            balance += deposit();
            showBalance(balance);
            break;
        case 3: // Withdraw from balance
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4: // Exit program
            std::cout << "Thank you for using the banking program!\n";
            break;
        default: // If user enters invalid choice (not 1-4)
            std::cout << "Invalid choice!\n";
            break;
        }
    } while (choice != 4);

    std::cout << "---======================---\n";

    return 0;
}

// Function definitions
void showBalance(double balance)
{
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n"; // Display balance
}

double deposit()
{
    // Variable declaration
    double amount = 0;

    // Get deposit amount
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
    std::cout << "---======================---\n";

    // Check if deposit amount is negative
    if (amount < 0) // Guard clause
    {
        std::cout << "You cannot deposit a negative amount!\n";
        return 0; // Return 0 to not deposit anything
    }

    // Return deposit amount|
    return amount;
}

double withdraw(double balance)
{
    // Variable declaration
    double amount = 0;

    // Get withdraw amount
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    std::cout << "---======================---\n";

    // Check if withdraw amount is negative
    if (amount < 0) // Guard clause
    {
        std::cout << "You cannot withdraw a negative amount!\n";
        return 0; // Return 0 to not withdraw anything
    }

    // Check if withdraw amount is greater than balance
    if (amount > balance) // Guard clause
    {
        std::cout << "Insufficient funds!\n";
        return 0; // Return 0 to not withdraw anything
    }

    // Return withdraw amount
    return amount;
}