// Accept file name and Read Whole data

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[10];     // Mug
    int fd = 0;
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);                          

    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    printf("File is succesfully opened with FD %d\n",fd);

    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));

    return 0;
}