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

    FILE *fp_cal = fopen("calc.txt", "wr");
    fputs("10+4=\n", fp_cal);
    char cal_buf[1024] = {0};
    fputs("1*2=\n", fp_cal);
    fclose(fp_cal);
    FILE *fp_cal_r = fopen("calc.txt", "r");
    fgets(cal_buf, 4096, fp_cal_r);
    int cal_a, cal_b;
    char cal_add;
    char cal_equal;
    printf("%s\n", cal_buf);
    sscanf(cal_buf, "%d%c%d=\n", &cal_a, &cal_add, &cal_b);
    printf("%d%c%d\n", cal_a, cal_add, cal_b);
    // fgets("%d%c%d%c\n",fp_cal);
    fclose(fp_cal_r);

    FILE *fp_read1 = fopen("./test.h", "r");
    FILE *fp_copy = fopen("copy_test.txt", "w");
    char copy_buf[128] = {0};
    int ret1 = 0;
    if (fp_read1 == NULL)
    {
        perror("fp_read1 fail");
    }
    while (1)
    {
        memset(copy_buf, 0, sizeof(copy_buf));
        ret1 = fread(copy_buf, 1, sizeof(copy_buf), fp_read1);
        printf("%d\n", ret1);
        if (ret1 == 0)
        {
            break;
        }
        printf("%d\n", ret1);
        // fwrite(copy_buf, 1, ret, fp_copy);
    }
    fclose(fp_read1);
    fclose(fp_copy);
}
