#include <iostream>

/*
A variable's scope is the part of the program that can 'see' or access the variable.
Generally, all variables defined within a set of curly braces are only accessible within that set of curly braces.
This is called scope.

Variables defined outside of all curly braces are called global variables.
Global variables are accessible from anywhere in the code.
Avoid using global variables, as they polute the global namespace, and can lead to bugs that are difficult to track down.
*/

void printNum();

int globalNum = 1; // global variable
int num = 2;       // global variable

int main()
{
    int num = 3; // local variable
    printNum();

    std::cout << num << '\n';       // num is in scope here
    std::cout << globalNum << '\n'; // globalNum is in scope here
    // std::cout << myNum << '\n'; // myNum is not in scope here

    // We can use the scope resolution operator '::' to access global variables from within a function that has a local variable with the same name
    std::cout << ::num << '\n'; // ::num is in scope here, and refers to the global variable num

    return 0;
}

void printNum()
{
    int myNum = 4;                  // local variable
    std::cout << myNum << '\n';     // myNum is in scope here
    std::cout << globalNum << '\n'; // globalNum is in scope here
    // std::cout << num << '\n'; // num is not in scope here
}