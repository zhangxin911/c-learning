#include <stdio.h>
#include <stdlib.h>
#include "math/MathFunctions.h"
#include "Config.h"
#include <iostream>
#include <string>
#include <memory>
#include "Worker/Worker0.h"

void test()
{
    std::cout << "test" << std::endl;
}

int func(void)
{
    static int counter = 1;
    return ++counter;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
/**
 * power - Calculate the power of number.
 * @param base: Base value.
 * @param exponent: Exponent value.
 *
 * @return base raised to the power exponent.
 */
int main(int argc, char *argv[])
{
    std::cout << 2 << std::endl;
    test();

    // if (argc < 3)
    // {
    //     printf("Usage: %s base exponent \n", argv[0]);
    //     return 1;
    // }
    // double base = atof(argv[1]);
    // int exponent = atoi(argv[2]);
    // double result = power(base, exponent);
    // printf("%g ^ %d is %g\n", base, exponent, result);

    // int answer;
    // answer = func() - func() * func();
    // printf("%d\n", answer);

    // Worker0 bob();

    for (int x = 1; x <= 100; x++)
    {
        int result = x;
        for (int y = 1; y <= x; y++)
        {
            if (x % y == 0 && y % 1 == 0 && x != y && y != 1)
            {
                result = x;
            }
        }
        std::cout << result << std::endl;
    }
    return 0;
}
