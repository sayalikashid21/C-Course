//  2. Accept character from user . If it is small display its corresponding capital character & if it is capital then display its small character.

#include<stdio.h>

void Display(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    {
        printf("small charater is : %c",(cValue+32));
    }
    else if(cValue>='a' && cValue<='z')
    {
        printf("Capital is : %c",(cValue-32));
    }
    else
    {
        printf("%c\t",cValue);
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