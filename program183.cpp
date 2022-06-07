// cont no of vowels (case sensitive)

#include<iostream>
using namespace std;

int CountVowels(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    iRet = CountVowels(Arr);

    cout << "Number of Vowels are : " << iRet << endl;

    return 0;
}