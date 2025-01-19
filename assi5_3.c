// 3. Write a program which accept two numbers and check whether numbers are equal or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool iRet = false;

    printf("Enter first number: ");
    scanf("%d",&iValue1);

    printf("Enter Second number: ");
    scanf("%d",&iValue2);

    iRet = CheckEqual(iValue1, iValue2);

    if(iRet == true)
    {
        printf("Numbers are equal");
    }
    else
    {
        printf("Numbers are not equal");
    }
    return 0;
}
