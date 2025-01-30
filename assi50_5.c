//  5. Write a recursive program which accept number from user and return its reverse number.

#include<stdio.h>

int ReverseR(int iNo)
{
    int iDigit = 0;
    static int iRev=0;
    
    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
        ReverseR(iNo);
    }
    return iRev;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = ReverseR(iValue);
    printf("Reverse number is: %d",iRet);

    return 0;
}