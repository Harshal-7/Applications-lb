// Accept String & Copy Capital Characters only into Another String

#include<iostream>
using namespace std;

void StrCpyCapX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpyCapX(Arr,Brr);

    cout << "Capital only String is : " << Brr << endl;

    return 0;
}