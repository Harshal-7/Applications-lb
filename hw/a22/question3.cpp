// Accept Character & check it's Digit or not(0-9)

#include<iostream>
using namespace std;

bool ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the Character : " << endl;
    cin >> cValue;

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        cout << "It is Digit" << endl;
    }
    else
    {
        cout << "It is not a Digit" << endl;
    }

    return 0;
}