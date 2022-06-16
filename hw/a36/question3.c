// Recursive program which display :
//  5   4   3   2   1

#include<stdio.h>

void DisplayI()
{
    int iCnt = 5;

    while(iCnt > 0)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }

}

void DisplayR()
{   
    static int iCnt = 5;

    if(iCnt > 0)
    {
        printf("%d\t",iCnt);
        iCnt--;
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