// Recursive program which display :
//  A   B   C   D   E   F

#include<stdio.h>

void DisplayI()
{
    char ch = 'a';

    while(ch <= 'f')
    {
        printf("%c\t",ch);
        ch++;
    }

}

void DisplayR()
{   
    static char ch = 'a';

    if(ch <= 'f')
    {
        printf("%c\t",ch);
        ch++;
        DisplayR();
    }

}

int main()
{
    // DisplayI();
    // printf("\n");
    DisplayR();
    printf("\n");

    return 0;
}