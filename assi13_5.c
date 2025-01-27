// 5. Accept N number from user and display all such element which are multiples of 11.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i=0;

    printf("Elemnets which are divisible by 5: \n");

    for(i=0; i<iLength; i++)
    {
        if((Arr[i]%11 == 0))
        {
           printf("%d\t", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt=0;
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

    Display(p, iSize);

    free(p);
    
    return 0;
}