#include<iostream>
using namespace std;

void Rev(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    Rev(arr);

    cout << "Reverse string is : " << arr << endl;

    return 0;
}