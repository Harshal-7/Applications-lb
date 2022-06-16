// Recursive program Accept string & count no. of characters
//  Input:     Hello
//  Output:    5

#include<stdio.h>

int StrlenX(char *str)
{
    static int iCnt = 0;
    
    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrlenX(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter String: \n");
    scanf("%[^\n]s",Arr);

   iRet = StrlenX(Arr);
    printf("Number of characters in String : %d\n",iRet);


    return 0;
}