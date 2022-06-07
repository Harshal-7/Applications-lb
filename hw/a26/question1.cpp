#include<iostream>
using namespace std;

bool ChkChar(char *str,char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }

        str++;

    }

    if(bFlag == true)
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
    char arr[20];
    char cValue;

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    cout << "Enter the Character" << endl;
    cin >> cValue;

    bool bRet = ChkChar(arr,cValue);

    if(bRet == true)
    {
        cout << "Character is Present" << endl;
    }
    else
    {
        cout << "Character is not Present" << endl;
    }

    return 0;
}