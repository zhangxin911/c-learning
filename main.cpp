#include <stdio.h>
#include <stdlib.h>
#include "math/MathFunctions.h"
#include "Config.h"
#include <iostream>

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

    if (argc < 3)
    {
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);
    printf("%g ^ %d is %g\n", base, exponent, result);

    int answer;
    answer = func() - func() * func();
    printf("%d\n", answer);

    return 0;
}
