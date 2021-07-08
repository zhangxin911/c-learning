#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/mman.h>

using namespace std;
template <class T>
void showT1(T a)
{
    cout << a << endl;
}
template <class T>
void showT2(T a, T b)
{
    cout << a << endl;
}

template <class T>
class template_class_1
{
public:
    template_class_1(T a)
    {
        this->value = a;
    }
    void showValue()
    {
        cout << this->value << endl;
    }
    T value;
};

void template_class_1_func(template_class_1<int> &a)
{
    a.showValue();
}

// class Person
// {
//     friend ostream &operator<<(ostream &cout, Person &p);

// private:
//     int a;
//     int b;

// public:
//     Person(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//     }
// };

// ostream &operator<<(ostream &cout, Person &p)
// {
//     cout << "p's value: " << p.a << "and" << p.b << endl;
//     return cout;
// }
class MyInterge
{

    friend ostream &operator<<(ostream &cout, MyInterge &p);

public:
    MyInterge()
    {
        this->num = 0;
    };

    MyInterge &operator++()
    {
        ++this->num;
        return *this;
    };

    MyInterge operator++(int a)
    {
        MyInterge temp = *this;
        this->num++;
        return temp;
    };

private:
    int num = 0;
};

ostream &operator<<(ostream &cout, MyInterge &p)
{
    // cout << p.num << endl;
    return cout;
}

class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }
    ~Person()
    {
        cout << "~Person" << endl;
    }
    void showAge()
    {
        cout << "age: " << this->age << endl;
    }

private:
    int age;
};

class SmartPointer
{
private:
    Person *s_person;

public:
    SmartPointer(Person *person)
    {
        this->s_person = person;
    }
    ~SmartPointer()
    {
        if (this->s_person)
        {
            delete s_person;
            this->s_person = NULL;
        }
    }
    Person *operator->()
    {
        return this->s_person;
    }
    Person &operator*()
    {
        return *this->s_person;
    }
};

class test1
{
public:
    void operator()(int age)
    {
        this->age = age;
        cout << this->age << endl;
    }

private:
    int age = 10;
};

class test2
{
public:
    test2() : m_age(30)
    {
    }

private:
    int m_age = 101;
};

class p1
{
public:
    // p1(){

    // }
    p1(int gold)
    {
        this->commonGold = commonGold;
    }
    void showGold()
    {
        cout << "p1 showGold" << endl;
        cout << this->commonGold << endl;
    };
    int commonGold = -1;
    int a = -2;
    static int b;
    static void showB()
    {
        cout << "p1 static showB" << endl;
    }

private:
    int gold = 1;
};

int p1::b = -11;

class p2 : public p1
{
public:
    p2(int gold) : p1(gold)
    {
        cout << "p2 constructor" << endl;
    }
    void showGold()
    {
        cout << "p2 showGold" << endl;
        cout << this->commonGold << endl;
    }
    int a = -22;
    static int b;
    static void showB()
    {
        cout << "p2 static showB" << endl;
    }
};

class p22 : private p1
{
public:
    void showCommonGold()
    {
        cout << this->commonGold << endl;
        // cout << this->gold << endl;
    }

private:
    void showPrivateGold()
    {
        // cout << this->gold << endl;
    }
};

int p2::b = -12;

class animal
{
public:
    virtual void speak()
    {
        cout << this->name << endl;
    }

private:
    string name = "cat";
};

class cat : public animal
{
public:
    void speak()
    {
        cout << "cat say" << endl;
    }
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "dog say" << endl;
    }
};

void animalSpeak(animal &a)
{
    a.speak();
}

typedef void(FUNC)(int a, int b);
typedef void (*FUNC1)(int a, int b);
void test(int a, int b)
{
    cout << "test" << endl;
}
int main()
{
    showT1("t1");
    showT2(100, 200);
    template_class_1<int> tc1(2);
    template_class_1_func(tc1);
    tc1.showValue();
    // Person p1(10, 20);
    // cout << p1 << endl
    //      << p1 << endl;
    animal a1;
    a1.speak();
    cat c1;
    dog d1;
    animalSpeak(c1);
    animalSpeak(d1);

    p1 c_p1(33);
    p2 c_p2(44);
    p22 c_p22();
    c_p1.showGold();
    c_p2.showGold();
    cout << c_p2.a << endl;
    cout << p2::b << endl;
    p1::showB();
    p2::showB();
    p2::p1::showB();
    test1 t1;
    t1(50);
    test2 t2;

    SmartPointer sp(new Person(20));
    sp->showAge();

    FUNC *p = test;
    p(1, 2);
    FUNC1 p1 = test;
    p1(1, 1);
    MyInterge myInt;
    cout << myInt << endl;
    ++myInt;
    cout << ++myInt << endl;
    myInt++;
    // cout << myInt++ << endl;
    cout << myInt << endl;
    // cout << myInt++ << endl;
    // pid_t pid = fork();
    // if (pid < 0)
    // {
    //     perror("forl fail");
    // }
    // else if (pid > 0)
    // {
    //     cout << "father fork id: " << getpid() << endl;

    //     // pid_t wpid = waitpid(pid, &status, 0);
    //     while (1)
    //     {
    //         int status;
    //         pid_t wpid = waitpid(pid, &status, WNOHANG);
    //         if (WIFEXITED(status))
    //         {
    //             cout << "quit normaily" << endl;
    //             cout << "quit id: " << wpid << endl;
    //             break;
    //         }
    //         else if (WIFSIGNALED(status))
    //         {
    //             cout << "quit by signal" << endl;
    //         }
    //     }

    //     // sleep(2);
    // }
    // else
    // {
    //     cout << "child fork id: " << getpid() << endl;
    //     cout << "father fork id: " << getppid() << endl;
    // }

    // int fd[2];
    // int fd_result = pipe(fd);
    // if (fd_result < 0)
    // {
    //     perror("fd_result fail");
    //     return -1;
    // }
    // else
    // {
    //     pid_t pid = fork();
    //     if (pid < 0)
    //     {
    //         perror("fork fail");
    //     }
    //     else if (pid > 0)
    //     {
    //         close(fd[0]);
    //         cout << getpid() << endl;
    //         write(fd[1], "hello world", strlen("hello world"));
    //         // sleep(2);
    //         wait(NULL);
    //     }
    //     else
    //     {
    //         close(fd[1]);
    //         char buf[40];
    //         memset(buf, 0, sizeof(buf));
    //         read(fd[0], buf, sizeof(buf));
    //         printf("buf: %s\n", buf);
    //         cout << getpid() << endl;
    //         cout << getppid() << endl;
    //     }
    // }
    // int fd[2];
    // int pipe_result = pipe(fd);
    // if (pipe_result < 0)
    // {
    //     perror("pipe error!");
    //     return -1;
    // }
    // else
    // {
    //     pid_t pid = fork();
    //     if (pid < 0)
    //     {
    //         perror("fork error!");
    //     }
    //     else if (pid > 0)
    //     {
    //         close(fd[0]);
    //         dup2(fd[1],STDOUT_FILENO);
    //         execlp("ps","ps","aux",NULL);
    //         wait(NULL);
    //     }
    //     else
    //     {
    //         close(fd[1]);
    //         dup2(fd[0],STDIN_FILENO);
    //         execlp("grep","grep","bash",NULL);
    //     }
    // }

    // pid_t pid;
    // for (int i = 0; i < 2; i++)
    // {
    //     pid = fork();
    //     if (i == 0)
    //     {
    //         int file_exists = access("./test_fifo", F_OK);
    //         if (file_exists != 0)
    //         {
    //             int ret = mkfifo("./test_fifo", 0777);
    //             if (ret < 0)
    //             {
    //                 perror("mkfifo error!");
    //                 return -1;
    //             }
    //         }
    //         else
    //         {
    //             int fd = open("./test_fifo", O_RDWR);
    //             if (fd < 0)
    //             {
    //                 perror("open error!");
    //                 return -1;
    //             }
    //             write(fd, "Hello World2!;", strlen("Hello World2!;"));
    //         }

    //         // close(fd);
    //     }
    //     else if (i == 1)
    //     {
    //         int file_exists = access("./test_fifo", F_OK);
    //         if (file_exists != 0)
    //         {
    //             int ret = mkfifo("./test_fifo", 0777);
    //             if (ret < 0)
    //             {
    //                 perror("mkfifo error!");
    //                 return -1;
    //             }
    //         }
    //         else
    //         {
    //             int fd = open("./test_fifo", O_RDWR);
    //             if (fd < 0)
    //             {
    //                 perror("open error!");
    //                 return -1;
    //             }
    //             char buf[64];
    //             memset(buf, 0, sizeof(buf));
    //             read(fd, buf, sizeof(buf));
    //             cout << "buf: " << buf << endl;
    //             close(fd);
    //         }
    //     }
    // }

    // pid_t pid = fork();
    // if (pid < 0)
    // {
    //     perror("fork error!");
    // }
    // else if (pid > 0)
    // {
    //     int exsist = access("./test1_fifo", F_OK);
    //     if (exsist != 0)
    //     {
    //         int ret = mkfifo("./test1_fifo", 0777);
    //         if (ret < 0)
    //         {
    //             perror("mkfifo error!");
    //             return -1;
    //         }
    //         else
    //         {
    //             int fd = open("./test1_fifo", O_RDWR);
    //             write(fd, "test1_fifo", strlen("test1_fifo"));
    //         }
    //     }
    //     cout << pid << endl;
    // }
    // else
    // {
    //     int fd = open("./test1_fifo", O_RDWR);
    //     if (fd < 0)
    //     {
    //         perror("open error!");
    //         return -1;
    //     }
    //     char buf[64];
    //     memset(buf, 0, sizeof(buf));
    //     read(fd, buf, sizeof(buf));
    //     cout << getpid() << endl;
    //     cout << "father and child fifo: " << buf << endl;
    // }

    // int fd = open("./test_mmap.log", O_RDWR);
    // if (fd < 0)
    // {
    //     cout << "open failed" << endl;
    //     return -1;
    // }
    // else
    // {
    //     int len = lseek(fd, 0, SEEK_END);
    //     void *addr = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    //     if (addr == MAP_FAILED)
    //     {
    //         perror("mmap failed");
    //     }
    //     pid_t pid = fork();
    //     cout << pid << endl;
    //     if (pid < 0)
    //     {
    //         perror("fork error!");
    //         return -1;
    //     }
    //     else if (pid > 0)
    //     {
    //         memcpy(addr, "hellow mmap", strlen("hellow mmap"));
    //         wait(NULL);
    //     }
    //     else
    //     {
    //         char *p = (char *)addr;
    //         cout << "child value: " << p << endl;
    //     }
    // }

    return 1;
}