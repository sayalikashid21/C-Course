// 3. Accept N numbers from user and check whether that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt=0;
    bool iFound = false;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFound = true;
        }
    }
    return iFound;
}

int main()
{
    int iCnt=0, iSize=0;
    bool bRet=false;
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

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}