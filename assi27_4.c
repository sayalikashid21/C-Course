// 4. Write a program which accept string from user and display only digits from that string.

#include <stdio.h>

void DisplayDigits(char *str)
{    
    int iCnt=0;
    printf("Digits present in string are: ");

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
        {
            printf("%c",str[iCnt]);
        } 
        iCnt++;
    }
}

int main()
{
    char Arr[50];
    
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}