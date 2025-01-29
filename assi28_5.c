// 5. Write a program which accept string from user and reverse that string in place.

#include<stdio.h>
#include<string.h>

void StrRevX(char str[])
{
    int iCnt=0, len = 0, temp;
    len = strlen(str);

    for(iCnt=0; iCnt<len/2; iCnt++)
    {
        temp = str[iCnt];
        str[iCnt] = str[len-iCnt-1];
        str[len-iCnt-1] = temp;
    }
}

int main()
{
    char Arr[20];

    printf("Enetr the string: ");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Reverse string is: %s",Arr);

    return 0;
}