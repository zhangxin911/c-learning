#ifndef Worker0_h
#define Worker0_h
#include <string>

class Worker0
{
private:
    std::string fullname;
    long id;

public:
    Worker0(/* args */) : fullname("no one"), id(0L){};
    Worker0(const std::string &s, long n) : fullname(s), id(n){};
    virtual ~Worker0() = 0;
    virtual void set();
    virtual void Show() const;
};

#endif