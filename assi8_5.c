// 5. Write a program which returns difference between even & odd factorial of given number.

#include <stdio.h>

int DiffFactorial(int iNo)
{
    int iCnt = 0, iFact1 = 1, iFact2 = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1*iCnt;
        }
        else
        {
            iFact2 = iFact2*iCnt;
        }
    }

    iDiff = iFact1 - iFact2;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = DiffFactorial(iValue);

    printf("Difference is : %d",iRet);

    return 0;
}
