// Copy 1st String into 2nd String & By removing all white spaces

#include<iostream>
using namespace std;

void StrCpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
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
    char Arr[30];
    char Brr[30];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpyX(Arr,Brr);

    cout << "Copied String is : " << Brr << endl;

    return 0;
}