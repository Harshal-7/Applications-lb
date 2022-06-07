// Accept String Display only Digits

#include<iostream>
using namespace std;

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            cout << *str;
        }

        str++;
    
    }
    cout << endl;
}

int main()
{
    char Arr[20];

    cout << "Enter String" << endl;
    cin.getline(Arr,20);

    DisplayDigits(Arr);

    return 0;
}