// Accept file Name and Open that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter file name to Open: \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File opened Succesfully with FD %d\n",fd);



    return 0;
}