//  1. Write a recursive program which accept string from user and count number of white spaces.

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;
    
    if(*str != '\0') 
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    int iRet=0;
    char Arr[20];

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);
    printf("Character Count is: %d",iRet);

    return 0;
}