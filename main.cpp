#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int test1(string a)
{
    int count = 0;
    string::iterator it = a.end();
    for (; it != a.begin(); it--)
    {
        if (*it == '\0' && *it != '\n')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}

int addOne(int arr[], int len)
{
    int originNum = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        originNum += arr[i] * pow(10, i);
    }
    originNum += 1;
    cout << originNum << endl;
    return 0;
}

int binarySum(char *a, char *b)
{
    int numA = atoi(a);
    int numB = atoi(b);
    int numSum = numA + numB;
    char aSum[256];
    cout << numA << endl;
    cout << numB << endl;
    sprintf(aSum, "%d", numSum);
    cout << aSum << endl;
}

int checkStep(int totalFloor)
{
    cout << "totalFloor: " << totalFloor << endl;
    return 0;
}

int main()
{
    string a = "Hello World!";
    // cout << test1(a) << endl;
    int digits1[4] = {1, 2, 3, 4};
    int digits2[2] = {9, 9};
    cout << addOne(digits1, sizeof(digits1) / sizeof(int)) << endl;
    cout << addOne(digits2, sizeof(digits2) / sizeof(int)) << endl;

    char *binaryStrA = "11";
    char *binaryStrB = "1";
    binarySum(binaryStrA, binaryStrB);
    int (*func_p)(int a);
    func_p = checkStep;
    func_p(3);
        // func_p = &checkStep;
        // (void *p);

        // int lfd = socket(AF_INET, SOCK_STREAM, 0);
        // struct sockaddr_in serv_addr, clit_addr;
        // char buf[4096];
        // socklen_t clit_addr_len;
        // serv_addr.sin_family = AF_INET;
        // serv_addr.sin_port = htons(9527);
        // serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
        // if (lfd == -1)
        // {
        //     // sys_nerr("socket error");
        // }
        // bind(lfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
        // listen(lfd, 128);
        // clit_addr_len = sizeof(clit_addr);
        // int cfd = accept(lfd, (struct sockaddr *)&clit_addr, &clit_addr_len);

        // while (1)
        // {
        //     int ret = read(cfd, buf, sizeof(buf));
        //     write(cfd, buf, ret);
        // }
        // close(lfd);
        // close(cfd);

        return 0;
}