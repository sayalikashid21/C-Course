// 1. Write a program which accept radius from user and calculate its area.
// Consider value of PI as 3.14 (Area=PI*Radius*Radius)

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0;
    //float PI = 3.14;

    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0;

    printf("Enter Radius of circle: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %f", dRet);

    return 0;
}