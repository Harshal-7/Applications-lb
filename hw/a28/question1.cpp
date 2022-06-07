// Copy 1st String into 2nd String in Revese Order

#include<iostream>
using namespace std;

void StrCpyRev(char *src,char *dest)
{
    char *start = src;
    char *end = src;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(*src != '\0')
    {
        *dest = *end;
        src++;
        dest++;
        end--;
    }

    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpyRev(Arr,Brr);

    cout << "Copied String is : " << Brr << endl;

    return 0;
}