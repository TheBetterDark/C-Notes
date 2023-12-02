#include <iostream>

int main()
{
    // Variables are used to store data in a program
    int x; // Declaring a variable
    int j, k, l; // Declaring multiple variables at once
    x = 5; // Assigning a value to a variable

    std::cout << x << '\n'; // Printing the value of a variable

    // You can also declare and assign a value to a variable at the same time
    int y = 10;
    std::cout << y << '\n';

    // You can also assign a variable to another variable
    int z = x;
    std::cout << z << '\n';

    // You can also assign a variable to the result of an expression
    int a = x + y;
    std::cout << a << '\n';

    // You can also assign a variable to the result of an expression involving other variables
    int b = x + y + z;
    std::cout << b << '\n';

    // You can also assign a variable to the result of an expression involving other variables and literals
    int c = x + y + z + 5;
    std::cout << c << '\n';

    return 0;
}