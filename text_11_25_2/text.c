#include <stdio.h>
//���һ����ĩβ����ͷ������

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