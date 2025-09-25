#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a=0;
//	scanf("%d\n", &a);
//	if (a % 2 == 1)
//		printf("%d是奇数\n", a);
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("你已经成年了\n");
//	else
//		printf("你还未成年\n");
//	return 0;
//}
//int main()
//{
//	int a, b, c;//定义变量
//	scanf("%d%*c%d%*c%d", &a, &b, &c);//输入三个整数
//	printf("%d %d %d", a, b, c);
//		return 0;
//
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else
//	{
//		if (age <= 44)
//		{
//			printf("青年\n");
//		}
//		else
//		{
//			if (age <= 59)
//			{
//				printf("中老年\n");
//			}
//			else
//			{
//				if (age <= 89)
//				{
//					printf("老年\n");
//				}
//				else
//					printf("老寿星\n");
//			}
//		}
//	}
//}
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else if (a == b)
        {
            printf("%d=%d\n", a, b);
        }
        else
        {
            printf("%d<%d\n", a, b);
        };
    }

    return 0;

}