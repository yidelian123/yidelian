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
            printf("猜大了\n");
            b += 1;
        }
        else if(a < random_number)
        {
            printf("猜小了\n");
            b += 1;
        }
        else
        {
            printf("猜对了\n");
            break;
        }
    }
    printf("你只用了%d次机会就猜中了\n", b);
    return 0;
}