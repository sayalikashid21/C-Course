#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0;

    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if(j==iCol-i+1 || i==1 || j==1 || i==iRow || j==iCol)
            {
                printf("*\t");
            }
            else if(j<iCol-i+1)
            {
                printf("$\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iNo1=0, iNo2=0;

    printf("Enter number of rows: ");
    scanf("%d", &iNo1);

    printf("Enter number of columns: ");
    scanf("%d", &iNo2);

    Pattern(iNo1, iNo2);

    return 0;
}