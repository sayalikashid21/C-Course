//  4. Write a recursive program which accept number from user and return Small digits.

#include<stdio.h>

int MinR(int iNo)
{
    int iDigit = 0;
    static int iMin = 9999;
    
    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        MinR(iNo);
    }
    return iMin;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = MinR(iValue);
    printf("Smallest digit is: %d",iRet);

    return 0;
}