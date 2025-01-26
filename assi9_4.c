// 4. Write a program which accept temperature in Fahrenheit and convert it into celsius.
// 1 celsius = (Fahrenheit-32)*(5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double fTempCel = 0;
    fTempCel = ((fTemp-32)*5/9);
    return fTempCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celcius: %f",dRet);

    return 0;
}