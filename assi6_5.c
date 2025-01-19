// 5. Write a program which accept N from user and prints first 5 multiples of N.

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=(5*iNo); iCnt++)
    {
        if((iCnt%iNo) == 0)
        {
            printf("  %d",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}