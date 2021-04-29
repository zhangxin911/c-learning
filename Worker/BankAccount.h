#ifndef BANK_ACCOUNT
#define BANK_ACCOUNT
#include <string>
class BankAccount
{
private:
    std::string name;
    std::string account;
    long save;
public:
    BankAccount(std::string name,std::string account,long save = 0);
    ~BankAccount();
    void ShowAccount();
    void SaveIn(long add_save);
    long SaveOut(long add_save);
};

#endif BANK_ACCOUNT