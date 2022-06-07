// Accept Character & check it's Alphabet or not

#include<iostream>
using namespace std;

bool ChkAlpha(char ch)
{
    if((ch >= 'a' && ch <= 'b') || (ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        cout << "It is Alphabet" << endl;
    }
    else
    {
        cout << "It is not an Alphabet" << endl;
    }

    return 0;
}