#include <iostream>
#include <thread>
#include <memory>

using namespace std;
mutex m;
void thread1()
{
    for (int i = 0; i < 20; i++)
    {
        cout << "thread1..." << endl;
    }
}

void thread2()
{
    for (int i = 0; i < 20; i++)
    {
        cout << "thread2..." << endl;
    }
}

class Report{
    private:
    std::string str;
    public:
    Report(const std::string s) :str(s){
        std::cout << "Object created!\n";
    }
    ~Report() {
        std::cout << "object deleted!\n";
    }
    void comment() const {
        std::cout << str << "\n";
    }
};

int main(int argc, char *argv[])
{
    thread th1(thread1);
    thread th2(thread2);
    th1.join();
    th2.join();
    cout << "main..." << endl;

    int n = thread::hardware_concurrency();//获取cpu核心个数  
    cout << n << endl;  

    {
        std::auto_ptr<Report> ps (new Report("using auto_ptr"));
        ps->comment();
    }

    {
        std::shared_ptr<Report> ps (new Report("using shared_ptr"));
        ps->comment();
    }

    {
        std::unique_ptr<Report> ps (new Report("using unique_ptr"));
        ps->comment();
    }


    return 0;
}
