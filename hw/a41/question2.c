// Accept File name & Count Number of Small Characters from that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountSmall(char FName[])
{
    int fd = 0;
    int iRet = 0;
    int iCnt = 0;
    char Data[100];
    char *ptr = Data;

    fd = open(FName,O_RDONLY);

    iRet = read(fd,Data,sizeof(Data));

    while(*ptr != '\0')
    {
        if(*ptr >= 'a' && *ptr <= 'z')
        {
            iCnt++;
        }
        ptr++;
    }

    close(fd);

    return iCnt;


}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file Name\n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small Characters are : %d\n",iRet);

    return 0;
}