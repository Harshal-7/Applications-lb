// Recursive program Accept String & return count of no of small characters
//  Input:     He llo Wor ld 
//  Output:    3

#include<stdio.h>

int Small(char Arr[])
{
    static int iCnt = 0;

    if(*Arr != '\0')
    {
        if(*Arr >= 'a' && *Arr <= 'z')
        {
            iCnt++;
        }

        Arr++;
        Small(Arr);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char Brr[30];

    printf("Enter String: \n");
    scanf("%[^\n]c",Brr);

    iRet = Small(Brr);
    printf("Count of small numbers : %d\n",iRet);

    return 0;
}