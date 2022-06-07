// Accept Character check it's special symbol or not

#include<iostream>
using namespace std;

bool ChkSpecial(char ch)
{
    if((ch >= 33) && (ch <= 47))
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

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        cout << "It is Special Character" << endl;
    }
    else
    {
        cout << "It is not a Special Character" << endl;
    }

    return 0;
}