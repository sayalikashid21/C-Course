// 1. Accept N number from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i=0, iESum=0, iOSum=0, iDiff=0;

    for(i=0; i<iLength; i++)
    {
        if(Arr[i]%2 == 0)
        {
            iESum = iESum + Arr[i];
        }
        else
        {
            iOSum = iOSum + Arr[i];
        }
    }
    iDiff = iESum - iOSum;
    return iDiff;
}

int main()
{
    int iSize = 0, iRet=0, iCnt=0;
    int *p =NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enetr %d elements\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elemnet %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is: %d", iRet);

    free(p);
    
    return 0;
}