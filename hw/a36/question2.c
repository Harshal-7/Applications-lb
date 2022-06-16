// Recursive program which display :
//  1   2   3   4   5

#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;

    while(iCnt < 6)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }

}

void DisplayR()
{   
    static int iCnt = 1;

    if(iCnt < 6)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR();
    }

}

int main()
{
    // DisplayI();
    // printf("\n");
    DisplayR();
    printf("\n");

    return 0;
}