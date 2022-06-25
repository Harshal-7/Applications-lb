// Accept File name & One Character & Count Number of Occurance of that character

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

int Frequrncy(char FName[],char ch)
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
            if(Data[i] == ch)
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
    char ch;

    printf("Enter file name: \n");
    scanf("%s",FileName);

    printf("Enter Charater:\n");
    scanf(" %c",&ch);

    iRet = Frequrncy(FileName,ch);
    printf("Frequency is %d\n",iRet);

    return 0;
}