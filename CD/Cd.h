#ifndef Cd_H
#define Cd_H

class Cd
{
private:
    char performance[50];
    char label[20];
    int selections;
    double playtime;

public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    ~Cd();
    void Report() const;
    Cd &operator=(const Cd &d);
};

class Class : public Cd
{
private:
    
public:
};

#endif
