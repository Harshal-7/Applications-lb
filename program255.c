#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    static char ch = 'a';

    if(i < iNo)
    {
        i++;
        Display(iNo);
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Value : \n");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");
    
    return 0;
}