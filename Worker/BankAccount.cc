#include "BankAccount.h"
#include <string>
#include <iostream>

BankAccount::BankAccount(std::string name, std::string account, long save = 0)
{
    name = name;
    account = account;
    save = save;
}

BankAccount::~BankAccount() {}

void BankAccount::ShowAccount()
{
    std::cout << "name: " << name << std::endl;
    std::cout << "account: " << account << std::endl;
    std::cout << "save: " << save << std::endl;
}

void BankAccount::SaveIn(long money)
{
    save = save + money;
}

long BankAccount::SaveOut(long money)
{
    if (money < save)
        return money;
    else
        std::cout << "no more money!" << std::endl;
}