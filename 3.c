#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("请输入你的体重/Kg\n");
    scanf("%f", &weight);

    printf("请输入你的身高/m\n");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("你的BMI指数是：%.2f\n", bmi);

    return 0;
}
