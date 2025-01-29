// 5. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

#include<stdio.h>

void Display(char ch)
{
    printf("Value\t Decimal\t Hexadecimal\t Octal\n");
    printf("%c\t %d\t\t %x\t\t %o",ch, ch, ch, ch);
}

int main()
{
    char cValue='\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}