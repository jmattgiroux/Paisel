#include "main.h"

namespace Paisel
{
    __declspec(dllimport) float add(float a, float b);
}

int main()
{
    sayHello();
    std::cout << "Result of 10.1 + 11.2 is: " << Paisel::add(10.1, 11.2) << std::endl;
    return 0;
}