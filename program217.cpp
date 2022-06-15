#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[],int Size)
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        cout << Arr[i] << endl;
    }

}

int main()
{
    int Brr[] = {10,20,30,40,50};
    Display(Brr,5);

    cout << endl;

    float Crr[] = {10.23,20.43,30.64,40.34,50.21};
    Display(Crr,5);

    return 0;
}