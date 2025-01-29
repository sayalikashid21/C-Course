// 4. Write a program which accept string and accept one character from user and Return index of last occurrence of that character.

#include<stdio.h>

int LastChar(char str[], char ch)
{
    int iCnt=0;
    int iFound = 0;
    iFound = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iFound = iCnt;
        }
        iCnt++;
    }
    return iFound;
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

    iRet = LastChar(Arr, cValue);

    printf("%c character location is: %d",cValue,iRet);

    return 0;
}