// addition of digits

#include<stdio.h>

int Summation(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        Summation(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Value : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Addition of Digits is : %d\n",iRet);

    return 0;
}