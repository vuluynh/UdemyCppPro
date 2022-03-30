#include <iostream>

#include "my_lib.h"

/**
 * @brief Couts hello world to the console.
 *
 * @return void
 */
void cout_hello_world()
{
    std::cout << "Cout: Hello World" << '\n';
}

unsigned int factorial(unsigned int number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}