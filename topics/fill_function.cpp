#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a given value.
    //          fill(begin, end, value)

    // std::string foods[10] = { // This is bad.
    //     "Pizza",
    //     "Pizza",
    //     "Pizza",
    //     "Pizza",
    //     "Pizza",
    //     "Hambuger",
    //     "Hambuger",
    //     "Hambuger",
    //     "Hambuger",
    //     "Hambuger"
    // }

    const int SIZE = 10;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE / 2), "Pizza");           // This is much better.
    fill(foods + (SIZE / 2), foods + SIZE, "Hambuger"); // This is much better.

    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}