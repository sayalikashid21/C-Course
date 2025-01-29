// 1. Write a program which accept string and accept one character from user and Check whether taht character is present in string or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char str[], char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enetr the string: ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to find: ");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == true)
    {
        printf("%c Character is present",cValue);
    }
    else
    {
        printf("%c character is not present",cValue);
    }

    return 0;
}