// open existing file and Read data in it

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

    iRet = read(fd,Data,10);

    printf("%d bytes Succesfully Read in file\n",iRet);
    
    printf("Data from file is :\n");
    write(1,Data,iRet);             // 1: moniter(stdout)


    return 0;
}


/*

0   STDIN       Keyboard
1   STDOUT      Monitor
2   STDERR      Moniter

*/