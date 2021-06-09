#include <iostream>
#include "test.h"
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

void test(int (*p)(int a), int a)
{
    (*p)(a);
    std::cout << a << std::endl;
}

typedef int(FUNCTION)(int a);
typedef int (*FUNCTION_P)(int b);

int inc(int a)
{
    std::cout << "my_func" << std::endl;
    return a;
}

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

int main(int, char **)
{
    FUNCTION *function1 = &inc;
    FUNCTION_P function2 = &inc;
    int (*FUNCTION_POINTER)(int c) = &inc;
    function1(2);
    function2(3);
    FUNCTION_POINTER(5);
    test(&inc, 1);
    test(function2, 4);
    test(FUNCTION_POINTER, 5);
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

    return 1;
}
