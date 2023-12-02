#include <iostream>

/*
Provides solution for preventing name conflicts n large projects.
Each enttity needs a unique name. A namespace allows for
identcally named entities as long as the namespaces are different.
*/

// Using the namespace keyword, we can create two variables with the same name
namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    // Attempt to create two variables with the same name (this will fail)
    // int x = 0;
    // int x = 1; // This is not allowed (compiler error)

    // We can use the same name for two variables as long as they are in different namespaces
    std::cout << "x = " << first::x << '\n';

    // We can also use the 'using' keyword to bring a specific namespace into scope
    using namespace second;
    std::cout << "x = " << x << '\n';

    // We can use the 'using' keyword to bring a library into scope
    using namespace std; // This is not recommended as it can cause name conflicts (Dangerous approach)
    using std::cout;     // This is recommended as it only brings in the specific entity that we want to use (Safer approach)

    return 0;
}