#include<iostream>
using namespace std;

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    int iRet = CountCapital(arr);

    cout << "Count of capital character is : " << iRet << endl;

    return 0;
}