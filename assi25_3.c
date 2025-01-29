//  3. Accept character from user . If it is capital then display all the characters from the input characters till Z. If input character is small then print all the character in reverse order till a. In order cases return directly.

#include<stdio.h>

void Display(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    {
        for(int i=cValue; i<='Z'; i++)
        {
            printf("%c\t",i);
        }
    }
    else if(cValue>='a' && cValue<='z')
    {
        for(int i=cValue; i>='a'; i--)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        printf("%c\t", cValue);
    }
}

int main()
{
    char ch = '\0';
  
    printf("Enter the chracter: \n");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}