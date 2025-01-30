//  4. Write a recursive program which display below pattern.

// Output: A    B   C   D   E   F

#include<stdio.h>

/*void DisplayR(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt=1, ch='A'; iCnt<=iNo; iCnt++, ch++)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            printf("%c\t",ch);
        }   
    }
}*/

void DisplayR(int iNo)
{
    static int iCnt = 1;
    static char ch = 'A';

    if(iCnt<=iNo)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            printf("%c\t",ch);
        }  
        iCnt++;
        ch++; 
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}