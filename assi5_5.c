// 5. Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

float CalPer(int iMarks, int iTotal)
{
    float fPer = 0.0f;

    if(iMarks == 0 || iTotal == 0 || (iMarks > iTotal))
    {
        printf("Invalid input");
        return fPer;
    }

    fPer = (((float)iMarks/(float)iTotal)*100);
    return fPer;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fAns = 0.0f;

    printf("Enter Obtained marks: ");
    scanf("%d",&iValue1);

    printf("Enter Total marks: ");
    scanf("%d",&iValue2);
    
    fAns = CalPer(iValue1,iValue2);

    printf("percentage is:%f",fAns);
    return 0;
}