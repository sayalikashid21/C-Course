// 5. Accept N numbers from user and accept one another number as NO, return frequency of NO from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt=0, iCount=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iCnt=0, iSize=0, iNO=0;
    int iRet = 0;
    int *p = NULL;

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

    printf("Enter the number: ");
    scanf("%d",&iNO);

    iRet = Frequency(p, iSize, iNO);

    printf("Frequency is: %d",iRet);

    free(p);

    return 0;
}