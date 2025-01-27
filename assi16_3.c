// 3. Acept N numbers from user and return the difference between largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[] , int iSize)
{
    int iCnt=0, iMin = Arr[0], iMax = Arr[0], iDiff=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    iDiff = iMax - iMin;
    return iDiff;
}

int main()
{
    int iSize = 0, iCnt=0, iRet=0;
    int * p = NULL;
    
    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the %d elements: \n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elemnet %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p, iSize);

    printf("Difference is: %d",iRet);

    free(p);
    
}