// Accept Character & check it's Capital or not

#include<iostream>
using namespace std;

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        cout << "It is Small-Case Character" << endl;
    }
    else
    {
        cout << "It is not a Small-Case Character" << endl;
    }

    return 0;
}