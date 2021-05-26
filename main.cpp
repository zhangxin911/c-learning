#include <iostream>

int main(int, char **)
{

    char ch1[] = "John, please!";
    printf("%s\n", ch1);
    printf("%d\n", strlen(ch1));
    char *start = ch1;
    char *end = ch1 + strlen(ch1) - 1;

    printf("%c\n", *start);
    printf("%c\n", *end);

    printf("%p\n", start);
    printf("%p\n", end);

    while (start < end)
    {
        char tmp = *start;
        printf("%c\n", tmp);
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }

    printf("%s\n", ch1);

    char ch2[] = "aabbaa";
    char *start2 = ch2;
    char *end2 = ch2 + strlen(ch2) - 1;
    bool isAABB = true;
    while (start2 < end2)
    {
        if (*start2 != *end2)
        {
            isAABB = false;
        }
        start2++;
        end2--;
    }

    printf("%d\n", isAABB);

    char ch3[] = "www.itcastcn$.this is *strtok test!";

    printf("%s\n", strtok(ch3, "$"));
    printf("%s\n", strtok(NULL, "$"));
}
