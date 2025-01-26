// 2.Accept single digit number from user and print it into word.

#include<stdio.h>

void Display(int iNo)
{
    char cAns[30];
    cAns[30] = (char)(iNo);
    printf("Number is: %c",cAns);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}