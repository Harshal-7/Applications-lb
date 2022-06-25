#include<stdio.h>

int CountSmall(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        CountSmall(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Brr[20];

    printf("Enter String : \n");
    scanf(" %[^'\n']s",Brr);

    iRet = CountSmall(Brr);
    printf("Small Characters are : %d\n",iRet);

    return 0;
}