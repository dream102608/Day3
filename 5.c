#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
//{
//	int a = 0, b;
//	scanf("%d", &a);
//	b = (a == 5 ? 3 : -3);
//	printf("%d\n", b);
//
//	return 0;
//}
//{
//	int year= 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("是闰年\n");
//	return 0;
//
//}
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}

{
	int a = 0;
	scanf("%d", &a);
	while (a)
	{
		printf("%d\n", a%10);
		a/=10;
	}
	return 0;

}