// Accept File name & One Count & read that number of characters from starting position 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

void DisplayN(char FName[],int iSize)
{
    int fd = 0, iRet = 0, i = 0, iCnt = 0;
    char Data[iSize];

    fd = open(FName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    while((iRet = read(fd,Data,sizeof(iSize))) != 0)
    {

    }
    close(fd);
}

int main()
{
    char FileName[20];
    int iRet = 0;
    int iValue = 0;

    printf("Enter file name: \n");
    scanf("%s",FileName);

    printf("Enter Number of Characters:\n");
    scanf(" %d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}