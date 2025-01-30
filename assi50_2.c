//  2. Write a recursive program which accept number from user and return largest digits.

#include<stdio.h>

int MaxR(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;
    
    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        MaxR(iNo);
    }
    return iMax;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = MaxR(iValue);
    printf("Largest digit is: %d",iRet);

    return 0;
}