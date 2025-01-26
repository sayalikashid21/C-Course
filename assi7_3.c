// 3. Write a program to find factorial of given number.

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        return iFact;
    }

    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        iFact = iFact*iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is: %d",iValue, iRet);

    return 0;
}
