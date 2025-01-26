// 2. Accept amount in US dollar and return its corresponding value in indian currency.

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAmt = 0;
    iAmt = (iNo * 70);
    return iAmt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter amount in US: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}