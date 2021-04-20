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
        for (int y = 1; y <= x; y++)
        {
            if (x % y == 0 && y % 1 == 0)
            {
                if (y != x && y != 1)
                    break;
                else if (x == 1 || y > 1)
                    std::cout << x << std::endl;
            }
        }
    }

    int year = 1900;
    int leap_year = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
    {
        leap_year = 1;
    }
    std::cout << leap_year << std::endl;

    double side_a, side_b, side_c;
    std::cin >> side_a;
    std::cin >> side_b;
    std::cin >> side_c;

    if (side_a != 0 && side_b != 0 && side_c != 0)
    {
        if (side_a + side_b > side_c || side_a + side_c > side_b || side_b + side_c > side_a)
        {
            if (side_a == side_b && side_b == side_c)
            {
                std::cout << "等边三角形" << std::endl;
            }
            else if (side_a == side_b || side_a == side_c || side_b == side_c)
            {
                std::cout << "等腰三角形" << std::endl;
            }
            else
            {
                std::cout << "不等边三角形" << std::endl;
            }
        }
    }

    // double side_enter;
    // int side_count = 3;

    // for(int side_c = 1; side_c <3;side_c ++) {

    // }
    // while (side_count > 0 )
    // {
    //     std::cout << "side_enter: " << side_enter << std::endl;
    //     side_count --;
    // }

    // while (std::cin >> side_a && std::cin >> side_b && std::cin >> side_c)
    // {
    //     // if (side_a == side_b && side_b == side_c)
    //     // {
    //     // } else if()
    // }

    return 0;
}
