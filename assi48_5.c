//  5. Write a recursive program which display below pattern.

// Output: a    b   c   d   e   f

#include<stdio.h>

/*void DisplayR(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt=1, ch='a'; iCnt<=iNo; iCnt++, ch++)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c\t",ch);
        }   
    }
}*/

void DisplayR(int iNo)
{
    static int iCnt = 1;
    static char ch = 'a';

    if(iCnt<=iNo)
    {
        if(ch >= 'a' && ch <= 'z')
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