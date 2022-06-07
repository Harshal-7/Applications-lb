// Copy 1st String into 2nd String by converting Catital to Small case

#include<iostream>
using namespace std;

void StrCpySmall(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
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

    StrCpySmall(Arr,Brr);

    cout << "Copied Smallcase String is : " << Brr << endl;

    return 0;
}