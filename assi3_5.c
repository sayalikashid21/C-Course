// 5. Accept on character from user and check whether that character is vowel (a, e, i, o, u) or not

#include <stdio.h>
#include <stdbool.h>
#include <cType.h>

bool CheckVowel(char cValue)
{
    char a, e, i, o, u;
 
    if((cValue==a || cValue==e || cValue==i || cValue==o || cValue==u))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character: ");
    scanf("%d", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}