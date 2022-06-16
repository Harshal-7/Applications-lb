// Recursive program Accept number & return it's factorial
//  Input:     5
//  Output:    120

#include<stdio.h>

int Fact(int iNo)
{
    static int iCnt = 1;
    static int iFact = 1;

    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        Fact(iNo);
    }

    return iFact;
}


int main()
{
    int iRet = 0,iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("Factorial is : %d\n",iRet);

    return 0;
}