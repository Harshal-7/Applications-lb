// Copy 1st String into 2nd String

#include<iostream>
using namespace std;

void StrCpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpyX(Arr,Brr);

    cout << "Copied String is : " << Brr << endl;

    return 0;
}