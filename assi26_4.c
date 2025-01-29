// 4. Write a program which accept string from user and check whether it contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str=='a' || *str=='i' || *str=='e' || *str=='o' || *str=='u' || *str=='A' || *str=='I' || *str=='E' || *str=='O' || *str=='U')
        {
            return 1;
            break;
        }
        str++;
    }
    return 0;
    
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