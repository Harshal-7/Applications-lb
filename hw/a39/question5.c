// Recursive program & return Smallest digit
//  Input:     87983
//  Output:     3

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    static int Rev = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        Rev = (Rev * 10) + iDigit;

        iNo = iNo / 10;

        Reverse(iNo);
    }

    return Rev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reverse Number is : %d\n",iRet);

    return 0;
}