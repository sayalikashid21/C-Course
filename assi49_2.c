//  2. Write a recursive program which accept number from user and return summation of its digits.

#include<stdio.h>

int SumDigitsR(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;
    
    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
        SumDigitsR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = SumDigitsR(iValue);
    printf("Summation of digits are: %d",iRet);

    return 0;
}