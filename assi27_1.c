// 1. Write a program which accept string from user and converts it into lower cases.

#include <stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        } 
        str++;
    }
}

int main()
{
    char Arr[50];
    
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Modified string is: %s",Arr);

    return 0;
}