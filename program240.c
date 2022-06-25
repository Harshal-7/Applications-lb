// Accept file name & Count number of Small Characters from that file
//  Maximum Throughput in Minimum Hardwear Movement

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>

int CountSmall(char FileName[])
{
    int fd = 0,iRet = 0;
    char Data[1024];
    int iCnt = 0,i = 0;

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Data[i] >= 'a' && Data[i] <= 'z')
            {
                iCnt++;
            }
        }

    }
    close(fd);
    return iCnt;
}

int main()
{
    char Fname[30];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);                

    iRet = CountSmall(Fname);

    printf("Number of Small Characters : %d\n",iRet);

    return 0;
}