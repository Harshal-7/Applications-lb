#include<stdio.h>

// Input : 123
// Output: 321

void DisplayI(int iNo)
{
    auto int iCnt = 0;

    while(iNo != 0)
    {
        printf("%d\t",iNo % 10);
        iNo = iNo / 10;
    }

}

void DisplayR(int iNo)
{

    if(iNo != 0)
    {
        iNo = iNo / 10;
        printf("%d\t",iNo % 10);
        DisplayR(iNo);
    }
}

int main()
{
    DisplayI(123);
    printf("\n");
    DisplayR(1234);

    return 0;
}