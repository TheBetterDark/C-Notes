#include <iostream>

int main()
{
    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5; // This is not allowed (it will be truncated to 7)

    // double (number including decimal point)
    double pi = 3.14159;
    double price = 10.99;
    double temperature = -12.5;

    // character (single character surrounded by single quotes)
    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';

    // boolean (true or false)
    bool isStudent = true;
    bool isPowered = false;
    bool forSale = true;

    // string (text surrounded by double quotes)
    std::string name = "John";
    std::string day = "Monday";
    std::string food = "Pizza";
    std::string address = "123 Main Street";

    // String Literals
    std::cout << "Age: " << age << '\n';
    std::cout << "Year: " << year << '\n';
    std::cout << "Days: " << days << '\n';
    std::cout << "Pi: " << pi << '\n';
    std::cout << "Price: " << price << '\n';
    std::cout << "Temperature: " << temperature << '\n';
    std::cout << "Grade: " << grade << '\n';
    std::cout << "Initial: " << initial << '\n';
    std::cout << "Currency: " << dollarSign << '\n';
    std::cout << "Is student: " << isStudent << '\n';
    std::cout << "Is powered: " << isPowered << '\n';
    std::cout << "For sale: " << forSale << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Day: " << day << '\n';
    std::cout << "Food: " << food << '\n';
    std::cout << "Address: " << address << '\n';

    return 0;
}