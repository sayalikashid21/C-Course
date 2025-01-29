// 5. Write a program which accept string from user and display it in reverse order.

#include<stdio.h>

ChkVowel(char *str)
{
  
    while(*str != '\0')
    {
        if(*str=='a' || *str=='e' || *str=='i'|| *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U' )
        {
            return true;
        }
        else
        {
            return false;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    bool iRet = false;

    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);

    iRet = ChkVowel(Arr);

    if(iRet == true)
    {
        printf("Contains Vowels\n");
    }
    else
    {
        printf("There is no Vowels\n");
    }

    return 0;
}