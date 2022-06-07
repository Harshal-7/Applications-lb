#include<iostream>
using namespace std;

void DisplayASCII()
{
    char ch = 0;

    while(ch != 127)
    {
        cout << ch << "\t";
        ch++;
    }
}

int main()
{
    DisplayASCII();

    return 0;
}