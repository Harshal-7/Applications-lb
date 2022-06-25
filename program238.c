// Accept file name & Display everything from that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>

void DisplayData(char FileName[])
{
    int fd = 0;
    int iRet = 0;
    char Data[10];

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    printf("File is succesfully opened with FD : %d\n",fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        write(1,Data,iRet);
    }

    close(fd);
}

int main()
{
    char Fname[30];
    char Data[10];     // Mug
    int fd = 0;
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);                

    DisplayData(Fname);

    return 0;
}