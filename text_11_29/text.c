#include <stdio.h>
#include <time.h>
//
////int main()
////{
////	printf("好\n");
////	int i = 1;
////	do
////	{
////		printf("%d\n", i);
////		i++;
////	} while (i <= 10);
////	
////	return 0;
////
//// }
////int main()
////{
////	int n = 0, count = 0;
////	while (scanf_s("%d", &n) != EOF)
////	{
////		do
////		{
////			n = n / 10;
////			count++;
////		} while (n);
////	}
////	printf("%d", count);
////	return 0;
////}
//
////int main()
////{
////	int i = 0;
////	//循环产⽣100~200的数字
////	for (i = 100; i <= 200; i++)
////	{
////		int j = 0;
////		int flag = 1;
////		for (j = 2; j < i; j++)
////		{
////			if (i % j == 0)
////			{
////				flag = 0;
////				break;
////			}
////		}
////		if (flag == 1)
////			printf("%d ", i);
////	}
////	return 0;
////}
//
////int main()
////{
////	int i, j;
////	for (i = 100; i <= 200; i++)
////	{
////		int flag = 0;
////		for (j = 2; j <= i - 1; j++)
////		{   
////			if(i % j == 0)
////			{
////				flag = 1;
////				break;
////			}
////		}
////		if (flag == 0)
////			printf("%d", i);
////	}
////	return 0;
////}
////#include <stdlib.h>
////int main()
////{
////	printf("猜数字\n");
////	srand(time(NULL));
////	int random_number = rand() % 101;
////	int a = 0;
////	int b = 1;
////	while (scanf_s("%d", &a) != EOF)
////	{
////		if (a != random_number)
////		{
////			if (a > random_number)
////			{
////				printf("猜大了\n");
////				b += 1;
////			}
////			else
////			{
////				printf("猜小了\n");
////				b += 1;
////			}
////		}
////		else
////		{
////			printf("猜对了\n");
////			printf("你猜了%d次\n", b);
////		}
////		
////	}
////	return 0;
////
//// }
//
//
//void menu()
//{
//	printf("************************\n");
//	printf("********1.play**********\n");
//	printf("********0.exit**********\n");
//	printf("************************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入：>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("请输入1或2\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//#include <stdlib.h>
//game()
//{
//	printf("欢迎参加游戏\n");
//	printf("请输入你想猜的数字\n");
//	int a = 0,b = 1;
//	srand(time(NULL));
//	int guess = rand() % 100 + 1;
//	while (scanf_s("%d", &a) != EOF)
//	{
//		if (a != guess)
//		{
//			if (a > guess)
//			{
//				printf("猜大了\n");
//				b += 1;
//			}
//			else
//			{
//				printf("猜小了\n");
//				b += 1;
//			}
//		}
//		else
//		{
//			printf("猜对了，用了%d次机会\n", b);
//			break;
//		}
//	}
//}
//#include <stdio.h>

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%d", 1 % 3);
//	return 0;
//}

int main()
{
	int a = 0, b = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d =%-4d",b,a,a * b);
		}
		printf("\n");
	}
	return 0;
}

//最大公约数
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	int middle = 0;
//	scanf_s("%d %d", &a, &b);
//	while (middle = a % b)
//	{
//		a = b;
//		b = middle;
//	}
//	printf("%d", b);
//
//	return 0;
//}

//100~200之间的素数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for(a = 100; a <= 200; a++)
//	{
//		int flag = 1;
//		for (b = 2; b <= a - 1; a++)
//		{
//			if (a % b == 0)
//			{
//				flag = 0;
//				break;
//			}
//		if (flag == 1)
//			printf("%d", a);
//		}
//	}
//	return 0;
//}