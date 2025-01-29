// 5. Accept division of student from user and depends on the division display exam timeing.
// there are 4 divisions in school as A, B, C, D. Exam of division A at 7 am, B at 8:30 am, C at 9:20 a and D at 10:30 am.

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv=='A')
    {
        printf("Exam at 7 AM");
    }
    else if(chDiv=='B')
    {
        printf("Exam at 8:30 AM");
    }
    else if(chDiv=='C')
    {
        printf("Exam at 9:20 AM");
    }
    else if(chDiv=='D')
    {
        printf("Exam at 10:30 AM");
    }
    else
    {
        printf("Wrong division");
    }
}

int main()
{
    char cValue='\0';

    printf("Enter your division: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}