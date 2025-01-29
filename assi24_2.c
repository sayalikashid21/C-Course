// 2. Accept character from user and check whether it is capital or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the chracter: \n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);
    if(bRet==true)
    {
        printf("It is a Capital\n");
    }
    else
    {
        printf("It is not Capital\n");
    }
    return 0;
}