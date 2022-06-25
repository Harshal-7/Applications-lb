// Accept 2 file name &  Compare the Data from them

// memcpy :- Copy
// memcpm :- Compare

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

bool FileCompare(char Source[], char Desination[])
{
    int FDsrc = 0, FDdest = 0;
    int iRet1 = 0, iRet2 = 0, i = 0;
    char Buffer1[FILESIZE];
    char Buffer2[FILESIZE];
    int iCmp = 0;

    FDsrc = open(Source,O_RDONLY);
    if(FDsrc == -1)
    {
        printf("Unable to Open Source file\n");
        return false;
    }

    FDdest = open(Desination,O_RDONLY);
    if(FDdest == -1)
    {
        printf("Unable to Open Destination File\n");
        return false;
    }

    while(1)
    {
        iRet1 = read(FDsrc,Buffer1,FILESIZE);
        iRet2 = read(FDdest,Buffer2,FILESIZE);

        if((iRet1 == 0) || (iRet2 == 0) || (iRet1 != iRet2))
        {
            break;
        }

        iCmp = memcmp(Buffer1,Buffer2,iRet1);

        if(iCmp != 0)
        {
            break;
        }

    }

    close(FDsrc);
    close(FDdest);

    if((iRet1 == 0) && (iRet2 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Fname1[20];
    char Fname2[20];
    bool bRet = false;

    printf("Enter First File Name\n");
    scanf("%s",Fname1);

    printf("Enter Second File Name:\n");
    scanf("%s",Fname2);

    bRet = FileCompare(Fname1,Fname2);

    if(bRet == true)
    {
        printf("Files are Same\n");
    }
    else
    {
        printf("Files are Different\n");
    }


    return 0;
}