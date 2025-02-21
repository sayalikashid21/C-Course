// 3. Accept N numbers from user and accept one another number as NO, return index of last occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt=0, iLastOcc=0;
    iLastOcc = -1;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iLastOcc = iCnt+1;
        }
    }
    return iLastOcc;
}

int main()
{
    int iCnt=0, iSize=0, iValue=0, iRet=0;
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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrence of that number is %d",iRet);
    }

    free(p);

    return 0;
}