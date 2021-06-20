#include <iostream>
#include "test.h"
#include <string>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

// typedef struct linkListNode
// {
//     int value;
//     struct linkListNode *next;
// } lld;

typedef struct linkListNode
{
    int value;
    linkListNode *next;
} lld;

void showStr(char *str)
{
    while (*str != '\0')
    {
        std::cout << *str << std::endl;
        str++;
    }
}

int fb_arr(int pos)
{
    if (pos == 1 || pos == 2)
    {
        return 1;
    }
    else
    {
        return fb_arr(pos - 1) + fb_arr(pos - 2);
    }
}

void test_function(int a)
{
    std::cout << a << std::endl;
}

void wrap_function(void (*p)(int a), double b)
{
    (*p)(b);
    std::cout << b << std::endl;
}

struct linkNode
{
    int value;
    linkNode *next;
};

struct linkList
{
    linkNode arr[10];
};

typedef void(FUNCTION)(int a);
typedef void (*FUNCTION_P)(int a);
int main(int argc, char *argv[])
{
    // for (size_t index = 0; index < argc; index++)
    // {
    //     printf("%s\n", argv[index]);
    // }

    FUNCTION *function = &test_function;
    function(2);
    FUNCTION_P function_p = &test_function;
    function_p(3);
    void (*function_p_p)(int a) = test_function;
    function_p_p(44);
    wrap_function(function, 10);
    wrap_function(function_p, 11);
    wrap_function(function_p_p, 12);

    char *function_str = "function_str";
    showStr(function_str);

    std::cout << fb_arr(5) << std::endl;
    // lld d4 = {44, NULL};
    // lld d3 = {3, &d4};
    // lld d2 = {2, &d3};
    // lld d1 = {1, &d2};
    // linkListNode link_arr[4] = {
    //     d1,
    //     d2,
    //     d3,
    //     d4};
    // for (int i = 0; i < sizeof(link_arr) / sizeof(linkListNode); i++)
    // {
    //     printf("%d\n", link_arr[i].value);
    // }

    lld *d4 = (lld *)malloc(sizeof(lld));
    d4->value = 42;
    d4->next = NULL;

    lld *d3 = (lld *)malloc(sizeof(lld));
    d3->value = 32;
    d3->next = d4;

    lld *d2 = (lld *)malloc(sizeof(lld));
    d2->value = 22;
    d2->next = d3;

    lld *d1 = (lld *)malloc(sizeof(lld));
    d1->value = 12;
    d1->next = d2;

    lld *p = d1;
    while (p != NULL)
    {
        printf("%d\n", p->value);
        p = p->next;
    }

    // printf("before fork: [%d]\n", getpid());
    // pid_t pid = fork();
    // if (pid < 0)
    // {
    //     perror("fork fail");
    //     return -1;
    // }
    // else if (pid > 0)
    // {
    //     printf("father: pid:[%d]\n", getpid());
    //     // sleep(5);
    // }
    // else if (pid == 0)
    // {
    //     printf("child: pid:[%d]\n", getpid());
    // }

    // printf("after fork: [%d]\n", getpid());

    // printf("before fork:[%d]\n", getpid());

    // for (size_t i = 0; i < 3; i++)
    // {
    //     pid_t pid = fork();
    //     if (pid < 0)
    //     {
    //         perror("fork fail");
    //     }
    //     else if (pid > 0)
    //     {
    //         printf("father pid:[%d], fpid:[%d]\n", getpid(), getppid());
    //     }
    //     else if (pid == 0)
    //     {
    //         printf("child pid:[%d], fpid:[%d]\n", getpid(), getppid());
    //         break;
    //     }
    // }

    printf("before fork: [%d]\n", getpid());
    pid_t pid = fork();
    int fork_val = 100;
    if (pid < 0)
    {
        perror("fork fail\n");
    }
    else if (pid > 0)
    {
        printf("father fork: [%d]\n", getpid());
        fork_val++;
        printf("fork_val:%d\n", fork_val);
        int status;
        pid_t wpid = wait(&status);
        printf("wpid: [%d]", wpid);
        printf("staus: [%d]", status);
    }
    else
    {
        // execl("/bin/ls", "ls", "-al", NULL);
        // perror("execel error!");
        printf("child fork: [%d]\n", getpid());
        printf("fork_val:%d\n", fork_val);
        sleep(2);
    }
    return 1;
}
