// Count Number of White Spaces from String

#include<iostream>
using namespace std;

int CountSpaces(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter String: " << endl;
    cin.getline(Arr,20);

    iRet = CountSpaces(Arr);

    cout << "Number of Spaces are : " << iRet << endl;

    return 0;
}