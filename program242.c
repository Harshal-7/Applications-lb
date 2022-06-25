// Accept file name & Count number of White Spaces from that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>

#define FILESIZE 1024

int CountWhiteSpaces(char FileName[])
{
    int fd = 0,iRet = 0;
    char Data[FILESIZE];
    int iCnt = 0,i = 0;

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Data[i] == ' ')
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
    char Fname[30];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);                

    iRet = CountWhiteSpaces(Fname);

    printf("Number of White Spaces : %d\n",iRet);

    return 0;
}