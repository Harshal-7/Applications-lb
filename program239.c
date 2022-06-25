// Accept file name & return Count number of Characters

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>

int FileLength(char FileName[])
{
    int fd = 0;
    int iRet = 0;
    char Data[10];
    int iSum = 0;

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File is succesfully opened with FD : %d\n",fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        iSum = iSum + iRet;
    }

    close(fd);
    return iSum;
}

int main()
{
    char Fname[30];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);                

    iRet = FileLength(Fname);

    printf("File length is : %d\n",iRet);

    return 0;
}