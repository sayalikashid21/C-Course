//  5. Write a recursive program which accept number from user and return products of its digits.

#include<stdio.h>

int MultiDigitsR(int iNo)
{
    int iDigit = 0;
    static int iMulti = 1;
    
    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iMulti = iMulti * iDigit;
        MultiDigitsR(iNo);
    }
    return iMulti;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = MultiDigitsR(iValue);
    printf("Summation of digits are: %d",iRet);

    return 0;
}