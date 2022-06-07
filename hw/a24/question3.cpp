#include<iostream>
using namespace std;

int Difference(char *str)
{
    int iCntUpper = 0;
    int iCntLower = 0;
    int iDiff = 0;

    while(*str != '\0')
    {
       if(*str >= 'a' && *str <= 'z')
       {
           iCntLower++;
       }
       else if(*str >= 'A' && *str <= 'Z')
       {
           iCntUpper++;
       }

       str++;

    }

    iDiff = iCntLower - iCntUpper;
    return iDiff;

}

int main()
{
    char arr[20];

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    int iRet = Difference(arr);
    cout << "Differece is : " << iRet << endl;

    return 0;
}