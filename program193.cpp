// String Comparison

#include<iostream>
using namespace std;

bool strcmpX(char *src,char *dest)
{

while((*src != '\0') && (*dest != '\0'))
{
    if((*src == *dest) || (*src == *dest + 32) || (*src == *dest - 32))
    {
        src++;
        dest++;
    }
    else
    {
        break;
    }
}

if(*src == '\0' && *dest == '\0')
{
    return true;
}
else
{
    return false;
}

}

int main()
{
    char Arr[20];
    char Brr[20];   
    bool bRet;

    cout << "Enter First String: " << endl;
    cin.getline(Arr,20);

    cout << "Enter Second String: " << endl;
    cin.getline(Brr,20);

    bRet = strcmpX(Arr,Brr);

    if(bRet == true)
    {
        cout << "Strings are Equal" << endl;
    }
    else
    {
        cout << "Strings are Different" << endl;
    }

    return 0;
}