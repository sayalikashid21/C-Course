// 5. Write application which accept file name from user and one string from user. Write that string at the end of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[100];
    char Arr[100] = {'\0'};
    int fd = 0, iRet = 0;

    printf("Enter the name of file in that you want to write:\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s file opened successfully\n",FileName);

        printf("Enter the data:\n");
        scanf(" %[^'\n']s",Arr);

        iRet = write(fd, Arr, strlen(Arr));

        printf("Data written into the file successfully\n");

        close(fd);
    }

    return 0;
}