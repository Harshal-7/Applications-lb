// Recursive program which display below pattern
//  Input:      6
//  Output: a   b   c   d   e   f

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 0;
    static char ch = 'a';

    if(iCnt < iNo)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Value : ");
    scanf("%d",&iValue);

    DisplayR(iValue);
    printf("\n");

    return 0;
}