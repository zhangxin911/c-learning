#include <stdio.h>
#include "hotel.h"
#include <iostream>

using namespace std;
int menu(void)
{
    int code, status;
    std::cout << STARS << std::endl;
}

int getinights(void)
{
    int nights;
    printf("How many nights are needed? ");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s");
        printf("Please enter an integer, such as 2/\n");
    }
    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;
    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
        total += rate * factor;
    printf("The total cost will be $0.2f.\n", total);
}