// 4. Accept character from user and check whether it is small or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);
    if(bRet==true)
    {
        printf("It is a Small\n");
    }
    else
    {
        printf("It is not Small\n");
    }
    return 0;
}