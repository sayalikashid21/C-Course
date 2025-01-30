//  3. Write a recursive program which accept string from user and count number of characters.

#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;
    
    if(*str != '\0') 
    {
        iCnt++;
        str++;
        Strlen(str);
    }
    return iCnt;
}

int main()
{
    int iRet=0;
    char Arr[20];

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    iRet = Strlen(Arr);
    printf("Character Count is: %d",iRet);

    return 0;
}