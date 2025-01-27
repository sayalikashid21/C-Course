// 4. Accept N numbers from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[] , int iSize)
{
    int iCnt=0, iDigit=0, iCount=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\t", Arr[iCnt]);
        }
        else if(Arr[iCnt] <= -100 && Arr[iCnt] >= -999)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }    
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

    Digits(p, iSize);

    free(p);
    
}