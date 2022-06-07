#include<iostream>
using namespace std;

int FirstChar(char *str,char ch)
{
    int iCnt = 0;
    int index = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            index = iCnt;
            break;    
        }

        iCnt++;
        str++;
    }

    if(index == iCnt)
    {
        return index;
    }
    else
    {
        return -1;
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

    int iRet = FirstChar(arr,cValue);

    cout << "First Occurance is  : " << iRet << endl;
 
    return 0;
}