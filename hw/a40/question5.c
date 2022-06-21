// Accept file Name and Display size of file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[100];
    int fd = 0;
    int iRet = 0;

    printf("Enter file name to Open: \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File Opened Succesfully with FD %d\n",fd);

    printf("Enter Something that you want to add at end of file : \n");
    scanf(" %[^'\n']s",Data);

    iRet = write(fd,Data,strlen(Data));


    return 0;
}