#include <iostream>

/*
Conversion of a value of one data type to a value of another data type

Implicit conversion = Performed automatically by the compiler
Explicit conversion = Performed by the programmer. Precede value wiith new data type e.g. (int)
*/

int main()
{
    // Implicit conversion
    int x = 3.14;
    std::cout << x << "\n"; // 3 (the decimal part is truncated)

    // Explicit conversion
    double y = (int)3.14;
    std::cout << y << "\n"; // 3 (the decimal part is truncated)

    // Character example
    char c = 97;                 // 97 is the ASCII code for character 'a'
    std::cout << c << "\n";      // Implicit conversion (prints 'a')
    std::cout << (int)c << "\n"; // Explicit conversion (prints 97)

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << "Score: " << score << "\n"; // 80%

    return 0;
}