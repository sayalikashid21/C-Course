// 3. Write a program which accept number from user and return 
// difference between summation of even digit and summation of odd digits.
#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iDiff = 0;
    int iSum = 0, iSum1 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit%2)==0)
        {
            iSum = iSum + iDigit;
        }
        else
        {
            iSum1 = iSum1 + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iSum - iSum1;
    return iDiff;
}

int main()
{
    int iValue = 0, iRet=0;
 
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}