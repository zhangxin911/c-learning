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

typedef void(FUNCTION)(int a);
typedef void (*FUNCTION_P)(int a);
int main(int, char **)
{
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

    return 1;
}
