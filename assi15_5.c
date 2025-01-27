// 5. Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt=0, iMul=0;
    iMul=1;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2) != 0)
        {
            iMul = iMul * Arr[iCnt];
        }
    }
    if(iMul==1)
    {
        return 0;
    }
    else
    {
        return iMul;
    }
}

int main()
{
    int iCnt=0, iSize=0;
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

    iRet = Product(p, iSize);

    printf("Product is: %d",iRet);

    free(p);

    return 0;
}