// Accept Character 

#include<iostream>
using namespace std;

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        while(ch != 91)
        {
            cout << ch << "\t";

            ch++;
        }

    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        while(ch != 96)
        {
            cout << ch << "\t";

            ch--;
        }
    }
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