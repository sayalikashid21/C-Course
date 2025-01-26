// 3. Write a program which accept distance in kilometere and convert it into meter.
// 1 Km = 1000 Meter

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;
    iAns = iNo * 1000;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Division is: %d", iRet);

    return 0;
}