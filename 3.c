#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("�������������/Kg\n");
    scanf("%f", &weight);

    printf("������������/m\n");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("���BMIָ���ǣ�%.2f\n", bmi);

    return 0;
}
