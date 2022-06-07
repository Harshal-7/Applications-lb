// Accept Character & check it's Capital or not

#include<iostream>
using namespace std;

bool ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        cout << "It is Capital Character" << endl;
    }
    else
    {
        cout << "It is not a Capital Character" << endl;
    }

    return 0;
}