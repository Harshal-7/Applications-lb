// Recursive program Accept number & return Products of digits
//  Input:     532
//  Output:    30

#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;
    static int iMult = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }

    return iMult;

}

int main()
{
    int iRet = 0,iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("Product of it's Digits is : %d\n",iRet);

    return 0;
}