// Accept File name & One Character & Count Number of Occurance of that character (CASE INSENSITIVE)

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void DisplayN(char FName[],int iSize)
{
    int fd = 0;
    int iRet = 0;
    int iCnt = 0;
    char Data[100];
    char *ptr = Data;

    fd = open(FName,O_RDONLY);

    iRet = read(fd,Data,iSize);

    printf("Data is : %s\n",Data);

    close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;
    int iRet = 0;

    printf("Enter file Name\n");
    scanf("%s",FileName);

    printf("Enter the Number of Character:\n");
    scanf("%d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}