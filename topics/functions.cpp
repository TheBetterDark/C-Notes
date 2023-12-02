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
void helloWorld();
// We are declaring the function here so that we can define it later.
// This is important because the function must be declared before it is called as code is read from top to bottom.
//

int main()
{
    std::string name = "John";
    int age = 21;

    happyBirthday(name, age); // Function call
    helloWorld();             // Function call

    return 0;
}

// Function definition
void helloWorld()
{
    std::cout << "Hello world!\n";
}