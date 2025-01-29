// 3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

#include<stdio.h>

int Difference(char *str)
{
    int iCnt=0, iDiff=0, iCnt1=0;

    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
        {
            iCnt++;
        }
        else if(*str>='a' && *str<='z')
        {
            iCnt1++;
        }
        str++;
    }
    iDiff = iCnt1-iCnt;

    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}