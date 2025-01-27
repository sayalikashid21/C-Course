// 5. Acept N numbers from user and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)
{
    int iCnt=0, iSum=0, iDigit=0;

    printf("Sum is: ");
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            Arr[iCnt] = Arr[iCnt] / 10;

            iSum = iSum + iDigit;
        }
        printf("%d\t",iSum);
        iSum = 0;
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

    Display(p, iSize);

    free(p);
    
}