// 4. Accept N numbers from user and accept one another number as NO, Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt=0;

    printf("Number in range %d to %d\n",iNo1, iNo2);

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]>iNo1) && (Arr[iCnt]<iNo2))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt=0, iSize=0, iStart=0, iEnd=0;
    int *p = NULL;

    printf("Enetr number of elements: ");
    scanf("%d",&iSize);

    printf("Enter start number: ");
    scanf("%d",&iStart);

    printf("Enter end number: ");
    scanf("%d",&iEnd);

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

    Range(p, iSize, iStart, iEnd);

    free(p);

    return 0;
}