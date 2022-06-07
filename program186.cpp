// convert String Toggle

#include<iostream>
using namespace std;

void strToggle(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    
    }
}

int main()
{
    char Arr[20];

    cout << "Enter String: " << endl;
    cin.getline(Arr,20);

    strToggle(Arr);

    cout << "Toggeled String is : " << Arr << endl;

    return 0;
}