#include<stdio.h>
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        while (a > 0)
        {
            printf("*");
            a--;
        }
        printf("\n");
    }
    return 0;
}