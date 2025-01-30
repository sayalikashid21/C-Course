//  4. Write a recursive program which accept number from user and return its factorial.

#include<stdio.h>

/*int FactorialR(int iNo)
{
    static int iFact = 1;
    
    if(iNo != 0) 
    {
        iFact = iFact * iNo;
        iNo--;
        FactorialR(iNo);
    }
    return iFact;
}*/

int FactorialR(int iNo)
{
    static int iFact = 1, iCnt=1;
    
    if(iCnt <= iNo) 
    {
        iFact = iFact * iCnt;
        iCnt++;
        FactorialR(iNo);
    }
    return iFact;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = FactorialR(iValue);
    printf("Factorial is: %d",iRet);

    return 0;
}