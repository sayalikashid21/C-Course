// 5. Write a program which accept number from user and display its table in reverse order.

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Table of %d is in reverse order:\n",iNo);

    for(iCnt=10; iCnt>=1; iCnt--)
    {
        printf(" %d ",(iNo*iCnt));
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
