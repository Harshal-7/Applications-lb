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

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File Opened Succesfully with FD %d\n",fd);

    iRet = read(fd,Data,sizeof(Data));

    printf("File Size is : %d Bytes\n",iRet);


    return 0;
}