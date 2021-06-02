#include <iostream>
#include "test.h"

typedef struct student
{
    int age;
    char name[10];
    int num;
} stu_t;

int main(int, char **)
{

    stu_t stu[4] = {
        {10, 'stu_a', 1},
        {21, 'stu_b', 2},
        {32, 'stu_c', 3},
        {43, 'stu_d', 4}};

    FILE *fp = fopen("fwrite&fread.log", "wb");
    if (fp == NULL)
    {
        perror("fopen error");
        return -1;
    }
    fwrite(&stu[1], sizeof(stu_t), 1, fp);
    fclose(fp);

    FILE *fp_read = fopen("fwrite&fread.log", "rb");
    stu_t s1;

    int ret = fread(&s1, sizeof(stu_t), 1, fp_read);
    printf("ret: %d\n", ret);

    printf("age:%d\n", s1.age);
    printf("name:%s\n", s1.name);
    printf("num:%d\n", s1.num);
    fclose(fp_read);

    Test my_test1;
    char *test = "my_test2";
    Test my_test2(test);
    Test my_test3 = "my_test3";
}
