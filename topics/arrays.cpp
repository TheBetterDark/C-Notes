#include <iostream>

/*
Arrays are a data structure that can hold multiple values.
Values are accessed by  an index number.
The index number starts at 0.

EXAMPLE:-
int myArray[5] = {1, 2, 3, 4, 5};
myArray[0] = 1
myArray[1] = 2
myArray[2] = 3
myArray[3] = 4
myArray[4] = 5
*/

int main()
{
    std::string cars[] = {"Volvo", "BMW", "Ford", "Mazda"}; // You can only store values of the same data type in an array

    // You can also declare an array without initializing it by specifying the size of the array
    std::string vehicles[4] // You must specify the size of the array when declaring it

        // You can then declare the values of the array by specifying the index number later
        vehicles[0] = "Volvo";
    vehicles[1] = "BMW";
    vehicles[2] = "Ford";
    vehicles[3] = "Mazda";

    std::cout << cars;    // This will print the memory address of the array
    std::cout << cars[0]; // This will print the first element of the array

    cars[0] = "Opel"; // This will change the first element of the array
    std::cout << cars[0];

    return 0;
}