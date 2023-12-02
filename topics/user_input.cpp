#include <iostream>

// cout << (insertion operator) = used to insert data into the stream
// cin >> (extraction operator) = used to extract data from the stream

int main()
{
    std::string name;
    int age;

    // std::cout << "Enter your first name: "; // Ask the user to enter their name
    // std::cin >> name;                       // Get the name from the user (This will ignore spaces)

    std::cout << "Enter your full name: ";   // Ask the user to enter their name
    std::getline(std::cin >> std::ws, name); // Get the name from the user (This will not ignore spaces and remove whitespaces)

    std::cout << "Enter your age: "; // Ask the user to enter their age
    std::cin >> age;                 // Get the age from the user

    std::cout << "Hello " << name << "." << '\n';    // Display the name
    std::cout << "You are " << age << " years old."; // Display the age

    return 0;
}