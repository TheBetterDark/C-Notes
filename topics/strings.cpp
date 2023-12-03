#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // .length() returns the length of the string
    std::cout << "Your name is " << name.length() << " characters long\n";

    // .empty() returns true if the string is empty, and false otherwise
    std::cout << "Your name is " << (name.empty() ? "empty\n" : "not empty\n");

    // .append() appends a string to the end of another string
    name.append("@hotmil.com");
    std::cout << "Your emil is " << name << '\n';

    // .at() returns the character at a given index
    std::cout << "The first character of your name is " << name.at(0) << '\n';

    // .insert() inserts a string into another string at a given index
    name.insert(0, "@");
    std::cout << "Your username is " << name << '\n';

    // .find() returns the index of the first occurrence of a given string
    std::cout << "The index of the first occurrence of \"@\" is " << name.find("@") << '\n';

    // .erase() erases a given number of characters from a given index
    name.erase(0, 3);
    std::cout << "Your name is " << name << '\n';

    // .clear() clears the string
    name.clear();
    std::cout << "Your name is " << name << '\n';

    // For more string functions, see https://www.cplusplus.com/reference/string/string/

    return 0;
}