#include <iostream>

/*
Functions are a block of reusable code that performs a specific task.
This is useful for when you need to perform the same task multiple times in a program.
Functions are also useful for breaking up large programs into smaller, more manageable chunks.

Example:
void FunctionName()
{
    - Code to be executed
}

First we have the return type, then the function name, then the arguments in parentheses, and finally the function body in curly braces.
*/

// Function declaration & definition
void happyBirthday(std::string name, int age)
{
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    ;
    std::cout << "Happy birthday dear " << name << "!" << '\n';
    std::cout << "Happy birthday to you!\n";
    std::cout << "You are now " << age << " years old!\n";
}

// Function declaration only
double square(double length);
double cube(double length);

std::string concatStrings(std::string string1, std::string string2);

// We are declaring the function here so that we can define it later.
// This is important because the function must be declared before it is called as code is read from top to bottom.
//

int main()
{
    std::string firstName = "John";
    std::string lastName = "Doe";
    int age = 21;

    happyBirthday(firstName, age); // Function call

    std::string fullName = concatStrings(firstName, lastName); // Function call
    std::cout << "Full name: " << fullName << '\n';

    double length = 6.0;
    double area = square(length); // Function call
    double volume = cube(length); // Function call

    std::cout << "Area: " << area << " cm^2" << '\n';
    std::cout << "Volume: " << volume << " cm^3" << '\n';

    return 0;
}

// Function definition
double square(double length)
{
    double result = length * length;
    return result;
}

double cube(double length)
{
    double result = length * length * length;
    return result;
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}