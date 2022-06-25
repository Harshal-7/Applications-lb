// Accept File name & Count Number of Capital Characters from that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

int CountCapital(char FName[])
{
    int fd = 0, iRet = 0, i = 0, iCnt = 0;
    char Data[FILESIZE];

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Data,FILESIZE)) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Data[i] >= 'A' && Data[i] <= 'Z')
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char FileName[20];
    int iRet = 0;

    printf("Enter file name: \n");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);
    printf("Number of Capital Character are: %d\n",iRet);

    return 0;
}