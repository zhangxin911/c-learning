#include "test.h"
#include <iostream>
using namespace std;

Test::Test()
{
    cout << "Test()" << endl;
};

Test::Test(char *str)
{
    this->str = new char[strlen(str) + 1];
    strcpy(this->str, str);
    cout << "Test(&test)" << str << endl;
    cout << "this str:" << this->str << endl;
};

Test::~Test()
{
    cout << "~Test()" << endl;
};