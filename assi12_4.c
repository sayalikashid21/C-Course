// 4. Write a program which accept number from user and return multiplication of all digits.

#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0, iMulti = 1;
   
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iMulti = iMulti * iDigit;
    }
    return iMulti;
}

int main()
{
    int iValue = 0, iRet=0;
 
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);
    printf("%d",iRet);

    return 0;
}