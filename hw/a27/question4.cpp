// Accept String & Copy Small Characters only into Another String

#include<iostream>
using namespace std;

void StrCpySmallX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a' && *src <= 'z') || *src == ' ')
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

    StrCpySmallX(Arr,Brr);

    cout << "Smallcase only String is : " << Brr << endl;

    return 0;
}