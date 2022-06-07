#include<iostream>
using namespace std;

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
       if(*str >= 'a' && *str <= 'z')
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

    int iRet = CountSmall(arr);
    cout << "Count of small character is : " << iRet << endl;

    return 0;
}