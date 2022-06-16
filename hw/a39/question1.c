// Recursive program Accept String & return count of White spaces
//  Input:     He llo Wor ld 
//  Output:    3

#include<stdio.h>

int WhiteSpace(char Brr[])
{
    static int iCnt = 0;

    if(*Brr != '\0')
    {
        if(*Brr == ' ')
        {
            iCnt++;
        }
        Brr++;
        WhiteSpace(Brr);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[30];

    printf("Enter String: \n");
    scanf("%[^\n]c",Arr);

    iRet = WhiteSpace(Arr);
    printf("Count of White Spaces : %d\n",iRet);

    return 0;
}