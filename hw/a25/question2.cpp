// Accept String & conver it into Upper Case

#include<iostream>
using namespace std;

void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprX(Arr);

    cout << "Uppercase String : " << Arr << endl;

    return 0;
}