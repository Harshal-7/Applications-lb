// open existing file and write data in it (concat)

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

    printf("Enter file name to open\n");
    scanf("%s",Fname);                          

    fd = open(Fname,O_RDWR | O_APPEND);      // Append ne existing file madhe last nntr add honar

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;      // Failuer
    }

    printf("File is succesfully opened with FD %d\n",fd);

    printf("\nEnter the Data that you want to write\n");
    scanf("%[^'\n']s",Data);

    iRet = write(fd,Data,strlen(Data));

    printf("%d bytes Succesfully written in file\n",iRet);


    return 0;
}