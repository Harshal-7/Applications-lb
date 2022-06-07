#include<iostream>
using namespace std;

int CountChar(char *str,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }

        str++;

    }

    return iCnt;

}

int main()
{
    char arr[20];
    char cValue;

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    cout << "Enter the Character" << endl;
    cin >> cValue;

    int iRet = CountChar(arr,cValue);

    cout << "Frequency of that Character is : " << iRet << endl;
 
    return 0;
}