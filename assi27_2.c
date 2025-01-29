// 2. Write a program which accept string from user and converts it into upper cases.

#include<stdio.h>

void strluprX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    strluprX(Arr);

    printf("Modified string is: %s",Arr);

    return 0;
}