// Accept Character & toggle it

#include<iostream>
using namespace std;

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
    }

    cout << ch << endl;

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the Character : " << endl;
    cin >> cValue;

    Display(cValue);

    return 0;
}