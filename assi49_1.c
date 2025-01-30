//  1. Write a recursive program which accept number from user and display below pattern.

// Output: 5   *   4   *   3   *   2   *   1   *

#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo != 0) 
    {
        printf("%d\t*\t",iNo);
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    DisplayR(iValue);
    return 0;
}