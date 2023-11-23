#include<stdio.h>
int main()
{
    int a, b, c;
    printf("请输入a的值：\n");
    scanf_s("%d", &a);
    printf("请输入b的值：\n");
    scanf_s("%d", &b);
    c = a * b;
    printf("%d", c);


    return 0;
}