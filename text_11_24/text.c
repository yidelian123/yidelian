#include <stdio.h>
#include<time.h>


int main(void)
{
    printf("欢迎来到数字炸弹游戏\n");
    printf("请输入你猜的数字:\n");
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

//int main()
//{
//    int a = 0;
//    int sum = 0;
//    for (a = 1; a <= 100; a++)
//    {
//        if (a % 3 == 0)
//        {
//            sum = sum + a;
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf_s("%d", &a);
//    while (a)
//    {
//        printf("%d", a % 10);
//        a = a / 10;
//    }
//    return 0;
//}
//
//int main()
//{
//    int a, b, c;
//    while (scanf_s("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if ((a == b) && (a == c) && (b == c))
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if ((a == c) || (a == b) || (b == c))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	float sum1 = 0.0;
//	float sum2 = 0.0;
//	float Sum = 0.0;
//	for(a = 1; a <= 100; a++)
//	{
//		if (a % 2 != 0)
//			sum1 = sum1 + 1.0 / a;
//		else
//			sum2 = sum2 + 1.0 / a;
//	}
//	Sum = sum1 - sum2;
//	printf("%f", Sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//		{
//			b++;
//		}
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}