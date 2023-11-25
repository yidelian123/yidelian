#include <stdio.h>
//输出一个从末尾到开头的整数

int main()
{
    int a = 0;
    scanf_s("%d", &a);
    while (a)
    {
        printf("%d", a % 10);
        a = a / 10;
    }
    return 0;
}