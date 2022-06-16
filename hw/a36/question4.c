// Recursive program which display :
//  A   B   C   D   E   F

#include<stdio.h>

void DisplayI()
{
    char ch = 'A';

    while(ch <= 'F')
    {
        printf("%c\t",ch);
        ch++;
    }

}

void DisplayR()
{   
    static char ch = 'A';

    if(ch <= 'F')
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