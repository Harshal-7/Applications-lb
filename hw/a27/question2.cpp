// Accept 1 String $ 1 Integer & copy that string into another string till that integer index

#include<iostream>
using namespace std;

void StrNCpyX(char *src,char *dest,int iCnt)
{
    int Stop = 0;

    while((*src != '\0') && Stop != iCnt)
    {
        *dest = *src;
        src++;
        dest++;
        Stop++;
    }

    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrNCpyX(Arr,Brr,10);

    cout << "Output String : " << Brr << endl;

    return 0;
}