// Recursive program & return Smallest digit
//  Input:     87983
//  Output:     3

#include<stdio.h>

int Small(int iNo)
{
    int iDigit = 0;
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;

        Small(iNo);
    }

    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Small(iValue);
    printf("Smallest Digits is : %d\n",iRet);

    return 0;
}