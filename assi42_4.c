// 4. Write a program which accepts file name and one character from user and count number of occurences of that characters from that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountChar(char FName[], char Ch)
{
    char Arr[100] = {'\0'};
    int fd = 0, iCnt = 0, iRet1=0, i=0;

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("%s file is unable to open\n",FName);
    }
    else
    {
        printf("%s file is opened successfully\n",FName);

        while((iRet1 = read(fd, Arr, sizeof(Arr))) != 0)
        {
            for(i=0; i<(sizeof(Arr)-1); i++)
            {
                if(Arr[i]==Ch)
                {
                    iCnt++;
                }
            }
        }
        close(fd);
    }
    return iCnt;
}

int main()
{
    char FileName[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the name of file:\n");
    scanf("%s",FileName);

    printf("Enter the name of character that you want to count: \n");
    scanf("%c", &cValue);
   
    iRet = CountChar(FileName, cValue);

    printf("Frequency is: %d\n", iRet);

    return 0;
}