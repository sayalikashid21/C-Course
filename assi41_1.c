// 1. Write application which accept file name from user and open that file in read mode.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[50];
    int fd = 0;
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter name of file which you want to read: ");
    scanf("%s",FileName);

    fd = open(FileName, O_RDONLY);

    if(fd==-1)
    {
        printf("%s is not available",FileName);
    }
    else
    {
        printf("%s file opened succesfully with file descriptor %d\n",FileName,fd);

        while((iRet = read(fd, Arr, sizeof(Arr))) != 0 )
        {
            printf("%s",Arr);
        }
      
        close(fd);
    }
    return 0;
}