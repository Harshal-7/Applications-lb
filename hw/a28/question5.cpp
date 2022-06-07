// Copy 1st String into 2nd String By Toggeling Characters

#include<iostream>
using namespace std;

void StrCpyToggle(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
            dest++;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
            dest++;
        }
        else
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

    StrCpyToggle(Arr,Brr);

    cout << "Copied Smallcase String is : " << Brr << endl;

    return 0;
}