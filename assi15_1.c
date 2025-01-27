// 1. Accept N numbers from user and accept one another number as NO, check whether NO is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iCnt=0, iSize=0, iValue=0;
    bool bRet=false;
    int *p = NULL;

    printf("Enetr number of elements: ");
    scanf("%d",&iSize);

    printf("Enter number: ");
    scanf("%d",&iValue);

    p = (int *) malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the %d elements: \n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter the element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is absent",iValue);
    }

    free(p);

    return 0;
}