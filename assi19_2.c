// 2. Accept number of rows and number of columns from user and display below patter

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0;
    char ch1 = '\0';

    for(i=1; i<=iRow; i++)
    {
        for(j=1, ch1='A'; j<=iCol; j++,ch1++)
        {
            if((i%2)==0)
            {
                printf("%c\t",(ch1+32));
            }
            else
            {
                printf("%c\t",ch1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
