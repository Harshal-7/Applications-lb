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

    printf("Enter file name to create\n");
    scanf("%s",Fname);                          

    printf("Enter the data that you want to write\n");
    scanf(" %[^'\n']s",Data);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;      // Failuer
    }

    printf("File is succesfully created with FD %d\n",fd);

    iRet = write(fd,Data,strlen(Data));
    printf("%d bytes succesfully written in file\n",iRet);


    return 0;
}

/*

Read :-     4
Write :-    2
Execute :-  1

Permission :-   0_Owner_Group_Other

0777 is octal number
permission che 3 prakar :-  read , witre , execute (4,2,1  number defined already)->(4+2+1 = 7)
(owner , group , (other)everyone)->( 7(owner) , 7(grp) , 7)

*/