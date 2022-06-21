// Accept file Name and Create that file

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

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("File Created Succesfully with FD %d\n",fd);



    return 0;
}