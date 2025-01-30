//  3. Write a recursive program which accept string from user and count number of small characters.

#include<stdio.h>

int Small(char *str)
{
    static int iCnt = 0;
    
    if(*str != '\0') 
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}

int main()
{
    int iRet=0;
    char Arr[20];

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    iRet = Small(Arr);
    printf("Character Count is: %d",iRet);

    return 0;
}