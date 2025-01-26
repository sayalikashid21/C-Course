// 4. Write a program to find odd factorial of given number.

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact*iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Factorial of %d is: %d",iValue, iRet);

    return 0;
}
