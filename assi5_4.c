// 4. Write a program which accept three numbers and print its multiplication.

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMulti = 0;
    
    if(iNo1==0 || iNo2==0 || iNo3==0)
    {
        printf("Invalid input\n");
        return iMulti;
    }

    iMulti = iNo1 * iNo2 * iNo3;
    return iMulti;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0, iValue3=0;
    int iAns = 0;

    printf("Enter first number: ");
    scanf("%d",&iValue1);

    printf("Enter Second number: ");
    scanf("%d",&iValue2);

    printf("Enter Third number: ");
    scanf("%d",&iValue3);
    
    iAns = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of %d * %d * %d : %d",iValue1,iValue2,iValue3,iAns);
    return 0;
}