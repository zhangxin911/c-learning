#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(int, char **)
{
    printf("%d%c%d=%d\n", 5, '+', 5, 10);
    FILE *fp = fopen("1.qqq", "rw");
    if (fp == NULL)
    {
        perror("fopen error");
        return -1;
    }
    // char str[1024] = {0};
    // str = fgetc(fp);
    // char *str;
    // *str = fgetc(fp);
    // printf("%s\n", str);
    fprintf(fp, "%d%c%d=%d\n", 5, '+', 5, 10);

    char str[1024];
    char *m1 = "m_string";
    char m[1024];
    scanf("%s", &str);
    printf("scanf result is: %s\n", str);
    sscanf(m1, "scanf result is: %s\n", &m);
    printf("sscanf is %s\n", m);
    char fstr[1024];
    int fscanf_a;
    int fscanf_b;
    char fscanf_ch;
    int fscanf_c;
    fscanf(fp, "%d%c%d=%d\n", &fscanf_a, &fscanf_ch, &fscanf_b, &fscanf_c);
    printf("fscanf is %d%c%d=%d\n", fscanf_a, fscanf_ch, fscanf_b, fscanf_c);
    fclose(fp);

    FILE *fp1 = fopen("2.txt", "r");
    char fp1_buffer[1024];
    while (1)
    {
        int num;
        // fscanf(fp1, "%d\n", &num);
        memset(fp1_buffer, 0, 1024);
        fgets(fp1_buffer, 1024, fp1);
        printf("%s", fp1_buffer);
        // printf("num is %d\n", num);
        if (feof(fp1))
        {
            break;
        }
    }
    fclose(fp1);
    srand(time(NULL));

    FILE *random_fp = fopen("random.log", "w");

    for (int i = 0; i < 10; i++)
    {

        printf("random num is : %d\n", rand() % 100);
        fprintf(random_fp, "%d\n", rand() % 100);
    }
    return 0;
}
