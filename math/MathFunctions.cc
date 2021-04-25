#include <stdio.h>
#include <stdlib.h>
#include "MathFunctions.h"
#include <iostream>

double power(double base, int exponent)
{
  int result = base;
  int i;

  if (exponent == 0)
  {
    return 1;
  }

  for (i = 1; i < exponent; ++i)
  {
    result = result * base;
  }
  return result;
}

double min(double a, double b)
{
  return a < b ? a : b;
}

void chline(char ch, int i, int j)
{
  using namespace std;
  if (i < j)
  {
    for (int x = 0; x < j; x++)
    {
      if (x == i)
      {
        std::cout << ch << std::endl;
      }
    }
  }
  else
  {
    for (int x = 0; x < i; x++)
    {
      std::cout << ch << std::endl;
    }
  }
}