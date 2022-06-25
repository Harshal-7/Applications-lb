#include<stdio.h>
#include<stdlib.h>

int Sum(int Arr[],int iSize)
{
    static int iSum = 0;

    if(iSize > 0)
    {
        iSum = iSum + Arr[iSize - 1];
        iSize--;
        Sum(Arr,iSize);
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iRet = 0;
    int i = 0;

    printf("Enter Number of Elements in Array: \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize*sizeof(iSize));

    printf("Enter Elements in Array:\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Sum(ptr,iSize);
    printf("Summation is : %d\n",iRet);

    return 0;
}