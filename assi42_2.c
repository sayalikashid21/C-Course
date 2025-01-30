// 2. Write a program which accepts file name from user and count number of small characters from that file.
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<fcntl.h>

 int CountSmall(char FName[])
 {
    char Arr[100] = {'\0'};
    int iRet=0, i=0, fd=0, iCnt=0;

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("%s file is unable to open\n",FName);
    }
    else
    {
        printf("%s file is opened successfully\n", FName);

        while((iRet = read(fd, Arr,sizeof(Arr))) != 0)
        {
            for(i=0; i<(sizeof(Arr)-1); i++)
            {
                if(Arr[i]>='a' && Arr[i]<='z')
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
    int iRet = 0;

    printf("Enter the name of file: \n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of small characters are: %d\n",iRet);

    return 0;
 }