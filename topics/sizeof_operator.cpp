#include <iostream>

/*
Sizeof is an operator thatdetermines the size in bytes of  a:
- variable
- data type
- array
- object
- class
- etc...
*/


int main()
{
    double marks = 4.5;
    std::cout << sizeof(marks) << " bytes\n"; // This will print 8 because a double is 8 bytes

    std::string name = "John Doe";
    std::cout << sizeof(name) << " bytes\n"; // This will print 32 bytes because a string holds an address to where the string is stored. This will always be 32 bytes.

    char grade = 'A';
    std::cout << sizeof(grade) << " bytes\n"; // This will print 1 byte because a char is 1 byte

    bool student = true;
    std::cout << sizeof(student) << " bytes\n"; // This will print 1 byte because a bool is 1 byte

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::cout << sizeof(grades) << " bytes\n"; // This will print 6 bytes because an array of chars is 6 bytes

    std::cout << sizeof(grades)/sizeof(char) << " elements\n"; // We can divide the size of the array by the size of the data type to get the number of elements in the array

    std::string students[] = {"John Doe", "Jane Doe", "Mary Doe", ""};
    std::cout << sizeof(students) << " bytes\n"; // This will print 128 bytes because an array of strings is 128 bytes

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n"; // We can divide the size of the array by the size of the data type to get the number of elements in the array

    return 0;
}