// 2. Accept N numbers from user and return difference between frequency of even number and odd numbers.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt=0, iECount=0, iOCount=0, iDiff=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iECount++;
        }
        else
        {
            iOCount++;
        }
    }

    iDiff = iECount - iOCount;
    return iDiff;
}

int main()
{
    int iCnt=0, iSize=0, iRet=0;
    int *p;

    printf("Enetr number of elements: ");
    scanf("%d",&iSize);

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

    iRet = Frequency(p, iSize);

    printf("Frequency of even number is: %d",iRet);

    free(p);

    return 0;
}