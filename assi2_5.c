// 5. Accept number from user and check whether number is evevn or odd.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int iNo1)
{
    if((iNo1%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Check(iValue);

    if(iRet == TRUE)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}