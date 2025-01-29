// 3. Write a program which accept string and accept one character from user and Return index of first occurrence of that character.

#include<stdio.h>

int FirstChar(char str[], char ch)
{
    int iCnt=0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return iCnt;
        }
        iCnt++;
    }
    return -1;
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

    iRet = FirstChar(Arr, cValue);

    printf("%c character location is: %d",cValue,iRet);

    return 0;
}