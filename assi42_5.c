// 5. Write a program which accepts file name and one count from user and read that number of characters from starting position. 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void DisplayN(char FName[], int iSize)
{
    char Arr[100] = {'\0'};
    int fd = 0, iRet=0;

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("%s file is unable to open\n",FName);
    }
    else
    {
        printf("%s file is opened successfully\n",FName);

        iRet = read(fd, Arr, iSize);

        printf("%s",Arr);
        
        close(fd);
    }
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the name of file:\n");
    scanf("%s",FileName);

    printf("Enter the number of characters: \n");
    scanf("%d",&iValue);
   
    DisplayN(FileName, iValue);

    return 0;
}