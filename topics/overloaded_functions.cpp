#include <iostream>

// Functions can be overloaded by having multiple functions with the same name but different parameters. This is called function signature.
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{

    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");

    return 0;
}

// Function definition
void bakePizza()
{
    std::cout << "Here's your pizza!\n";
}

// Overloaded function
void bakePizza(std::string topping1)
{
    std::cout << "Here's your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Here's your " << topping1 << " and " << topping2 << " pizza!\n";
}