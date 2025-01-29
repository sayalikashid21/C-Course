// 2. Write a program which accept string and accept one character from user and Return frequency of that character.

#include<stdio.h>

int CountChar(char str[], char ch)
{
    int iCnt=0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enetr the string: ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to find: ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr, cValue);

    printf("Frequency of %c character is: %d",cValue,iRet);

    return 0;
}