// 2. Write a program which accept one number from user and check whether that number is grater than 100 or not.

#include <stdio.h>
#include <stdbool.h>

bool CheckGrt(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CheckGrt(iValue);

    if(iRet == true)
    {
        printf("%d is greater",iValue);
    }

    else
    {
        printf("%d is smaller",iValue);
    }

    return 0;
}