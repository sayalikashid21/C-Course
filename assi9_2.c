// 2. Write a program which accept width & height of rectangle from user and calculate
// its area. (Area = Width*Height)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;
    dArea = fWidth * fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0;

    printf("Enter Width of rectangle: ");
    scanf("%f", &fValue1);

    printf("Enter Height of rectangle: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of circle is: %f", dRet);

    return 0;
}