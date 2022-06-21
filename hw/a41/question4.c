// Accept File name & One Character & Count Number of Occurance of that character (CASE INSENSITIVE)

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountChar(char FName[],char Ch)
{
    int fd = 0;
    int iRet = 0;
    int iCnt = 0;
    char Data[100];
    char *ptr = Data;
    char ChX = '\0';

    fd = open(FName,O_RDONLY);

    iRet = read(fd,Data,sizeof(Data));

    while(*ptr != '\0')
    {
        if(Ch >= 'A' && Ch <= 'Z')
        {
            ChX = Ch + 32;
        }
        else if(Ch >= 'a' && Ch <= 'z')
        {
            ChX = Ch - 32;
        }

        if(*ptr == Ch || *ptr == ChX)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter file Name\n");
    scanf("%s",FileName);

    printf("Enter the Character:\n");
    scanf("%s",&ch);

    iRet = CountChar(FileName,ch);

    printf("Frequency is : %d\n",iRet);

    return 0;
}