// 6
// a b c d e f

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if(iNo != 0)
    {
        printf("%c\t",ch);
        ch++;
        iNo--;
        Display(iNo);
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