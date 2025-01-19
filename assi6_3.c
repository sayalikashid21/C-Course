// 3. Write a program which accept number from user and prints its numbers line.

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        printf("  -%d",iCnt);
    }

    for(iCnt=0; iCnt<=iNo; iCnt++)
    {
        printf("  %d",iCnt);
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