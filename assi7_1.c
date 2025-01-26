// 1. Write a program from user and if number is less than 50 then print small, if it is grater then 50 and less than 100 then 
// print medium, if it is greater than 100 then print large.

#include <stdio.h>

void Number(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        return;
    }

    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo>=50 && iNo<100)
    {
        printf("Medium");
    }
    else
    {
        printf("Greater");
    }

    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}