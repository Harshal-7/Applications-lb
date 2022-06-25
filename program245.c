// Accept 2 file name &  Concate 1st file data into last file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define FILESIZE 1024

void FileConcate(char Source[], char Desination[])
{
    int FDsrc = 0, FDdest = 0;
    int iRet = 0;
    char Buffer[FILESIZE];

    FDsrc = open(Source,O_RDONLY);
    if(FDsrc == -1)
    {
        printf("Unable to Open Source file\n");
        return;
    }

    FDdest = open(Desination,O_RDWR | O_APPEND);
    if(FDdest == -1)
    {
        printf("Unable to Open Destination File\n");
        return;
    }

    while((iRet = read(FDsrc,Buffer,FILESIZE)) != 0)
    {
        write(FDdest,Buffer,iRet);
    }

    close(FDsrc);
    close(FDdest);

}

int main()
{
    char Fname1[20];
    char Fname2[20];

    printf("Enter file name which contains Data\n");
    scanf("%s",Fname1);

    printf("Enter file name that you want to Create:\n");
    scanf("%s",Fname2);

    FileConcate(Fname1,Fname2);


    return 0;
}