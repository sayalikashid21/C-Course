// 1. Write a program which accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    
    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iMul = iMul * iCnt; 
        }
    }  
     return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter first number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication is: %d ",iRet);

    return 0;
}