// 1. Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
    //int iValue2 = 0; 
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    printf("Output:\n");
    for(iCnt=2; iCnt<=(2*iNo); iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("  %d",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}
