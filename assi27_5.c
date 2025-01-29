// 5. Write a program which accept string from user and count number of white space.

#include <stdio.h>

int CountWhite(char *str)
{    
    int iCnt=0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        } 
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;
    
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);
    
    printf("Number of white spaces in string are: %d",iRet);

    return 0;
}