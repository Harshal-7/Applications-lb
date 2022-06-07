// Accept String & Count Number of White Spaces

#include<iostream>
using namespace std;

int CountWhite(char *str)
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

    cout << "Enter String" << endl;
    cin.getline(Arr,20);

    iRet = CountWhite(Arr);

    cout << "Number of White Spaces : " << iRet << endl;

    return 0;
}