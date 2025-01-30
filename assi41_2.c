// 2. Write application which accept file name from user and create that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[100];
    int fd = 0;

    printf("Enter the file name which you want to create: ");
    scanf("%s",FileName);

    fd = creat(FileName, 0777);

    if(fd == -1)
    {
        printf("unable to create file");
    }
    else
    {
        printf("%s file is created successfully...",FileName);
    }

    return 0;
}