// Accept 2 Strings & Concat 2nd String after First

#include<iostream>
using namespace std;

void StrCatX(char *src,char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    *src = ' ';
    src++;

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}

int main()
{
    char Arr[40];
    char Brr[40];

    cout << "Enter First String : " << endl;
    cin.getline(Arr,40);

    cout << "Enter Second String : " << endl;
    cin.getline(Brr,40);

    StrCatX(Arr,Brr);

    cout << "Concated String : " << Arr << endl;

    return 0;
}