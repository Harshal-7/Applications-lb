// Accept String & conver it into Lower Case

#include<iostream>
using namespace std;

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
        
    }
}

int main()
{
    char Arr[20];

    cout << "Enter String" << endl;
    cin.getline(Arr,20);

    strtoggleX(Arr);

    cout << "Toggle String : " << Arr << endl;

    return 0;
}