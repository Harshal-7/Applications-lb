#include<iostream>
using namespace std;

bool ChkVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            bFlag = true;
            break;
        }

        str++;

    }

    if(bFlag == true)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char arr[20];

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    bool bRet = ChkVowel(arr);

    if(bRet == true)
    {
        cout << "Contains Vowel" << endl;
    }
    else
    {
        cout << "Does not Contain Vowel" << endl;
    }
    
    return 0;
}