#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a=0;
//	scanf("%d\n", &a);
//	if (a % 2 == 1)
//		printf("%d������\n", a);
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("���Ѿ�������\n");
//	else
//		printf("�㻹δ����\n");
//	return 0;
//}
//int main()
//{
//	int a, b, c;//�������
//	scanf("%d%*c%d%*c%d", &a, &b, &c);//������������
//	printf("%d %d %d", a, b, c);
//		return 0;
//
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("����\n");
//	else
//	{
//		if (age <= 44)
//		{
//			printf("����\n");
//		}
//		else
//		{
//			if (age <= 59)
//			{
//				printf("������\n");
//			}
//			else
//			{
//				if (age <= 89)
//				{
//					printf("����\n");
//				}
//				else
//					printf("������\n");
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