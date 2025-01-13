// 4. Accept one character from user and convert case of that character

#include <stdio.h>
#include <Ctype.h>

void DisplayConvert(char cValue1)
{
    char cValue2 = '\0';
    if((cValue1==[a-z]))
    {
        printf(" %c",(~cValue1));
    }
    else if((cValue1==[A-z]))
    {
        printf(" %c",(~cValue1));
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c", &cValue);
    DisplayConvert(cValue);

    return 0;
}