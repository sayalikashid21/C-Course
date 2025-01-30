// 3. Write application which accept file name from user and read all data from that file and display contents on screen.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[100];
    char Arr[100] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter the name of file which you want to create: \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("%s file is not available\n",FileName);
    }
    else
    {
        printf("%s File opened successfully",FileName);

        while((iRet = read(fd, Arr, sizeof(Arr))) != 0)
        {
            printf("%s",Arr);
        }

        close(fd);

    }

    return 0;
}
