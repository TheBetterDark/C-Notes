#include <iostream>

int searchArray(int array[], int size, int element);

int main()
{
    // Searching for a value in an array
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;

    std::cout << "Enter a number to search for: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1)
    {
        std::cout << "Found " << myNum << " at index " << index << '\n';
    }
    else
    {
        std::cout << "Could not find " << myNum << '\n';
    }

    return 0;
}

// Searches an array for an element and returns the index of the element if found, otherwise returns -1
int searchArray(int array[], int size, int element)
{
    for(int i = 0; i < size; i++) // iterate over the array
    {
        if (array[i] == element) // if the element at index i is equal to the element we are searching for
        {
            return i; // return the index of the element that was found
        }
    }
    return -1; // -1 means the element was not found
}