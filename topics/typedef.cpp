#include <iostream>
#include <vector>

/*
Reserved keyward used to create an addtonal name (alias) for another data type.
New identifier for an existing type.
Helps with code readability and reduces typos.
Use when there is a clear benefit.
Replced with 'using' (work better with templates).
*/

// 'typedef' keyword can be used to create aliases for any data type
typedef std::string text_t; // 'text_t' is now an alias for this data type
typedef int number_t; // 'number_t' is now an alias for this data type

// Example of a long data type
// typedef std::vector<std::pair<std::string, int>> pairlist_t; // 'pairlist' is now an alias for this data type

// using can be used to create aliases for any data type
// using text_t = std::string;

int main()
{   
    // 'text_t' is now an alias for this data type which we can use to create variables
    text_t first_name = "John"; // This is much easier to read and type
    number_t age = 30; // This is much easier to read and type

    std::cout << "Name: " << first_name << '\n';
    std::cout << "Age: " << age << '\n';

    // Example of a long data type
    // std::vector<std::pair<std::string, int>> pairlist; // This is a very long data type and can be difficult to read and type
    // pairlist_t pairlist; // This is much easier to read and type

    return 0;
}