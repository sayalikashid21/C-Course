// 1. Write a program which displays ASCCII table. Table contains sybol, Decimal, Hexadecimal and octal represntation of every member from 0 t0 255.

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("====================================================\n");
    printf("                    ASCII Table                     \n");
    printf("====================================================\n");
    
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("----------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}