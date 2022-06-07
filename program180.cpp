// Count No of Small Characters

#include<iostream>
using namespace std;

int CountLower(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))  // >= 97    <= 122 (ascii)
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

    iRet = CountLower(Arr);

    cout << "Smaller Characters Count is : " << iRet << endl;

    return 0;
}