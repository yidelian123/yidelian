#include <stdio.h>
#include<time.h>


int main()
{
    srand(time(NULL));
    int random_number = rand() % 101;
    int a = 0;
    int b = 1;
    //scanf_s("%d", &a);
    while (scanf_s("%d", &a) != EOF)
    {
        if (a > random_number)
        {
            printf("�´���\n");
            b += 1;
        }
        else if(a < random_number)
        {
            printf("��С��\n");
            b += 1;
        }
        else
        {
            printf("�¶���\n");
            break;
        }
    }
    printf("��ֻ����%d�λ���Ͳ�����\n", b);
    return 0;
}