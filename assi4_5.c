// 5. Write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iDiff = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum1 = iSum1 + iCnt; 
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }  
    printf(" sum of factors: %d\n",iSum1);

    printf(" sum of non factors: %d\n",iSum2);

    iDiff = iSum1 - iSum2; 

    return iDiff;  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between factors and non factors is: %d\n", iRet);

    return 0;
}