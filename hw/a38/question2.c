// Recursive program & return summation of it's digit
//  Input:     879
//  Output:    24

#include<stdio.h>

int Sum(int iNo)
{
    const int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;    
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("Sum of Digits is : %d\n",iRet);

    return 0;
}