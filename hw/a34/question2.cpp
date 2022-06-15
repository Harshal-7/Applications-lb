// write Generic program to find Largest number from 3 numbers

#include<iostream>
using namespace std;

template <class T>
class Numbers
{
    private:
        T No1;
        T No2;
        T No3;
    public:
        void Accept();
        T Largest();
};

template <class T>
void Numbers<T>::Accept()
{
    cout << "Enter First Number : " << endl;
    cin >> No1;
    cout << "Enter Second Number : " << endl;
    cin >> No2;
    cout << "Enter Third Number : " << endl;
    cin >> No3;
}

template <class T>
T Numbers<T>::Largest()
{
    T Max = No1;
    if(No2 > Max)
    {
        Max = No2;
    }
    if(No3 > Max)
    {
        Max = No3;
    }
    return Max;
}

int main()
{
    Numbers<int>obj1;
    obj1.Accept();
    cout << "Largest Number is : " << obj1.Largest() << endl;

    cout << endl;

    Numbers<float>obj2;
    obj2.Accept();
    cout << "Largest Number is : " << obj2.Largest() << endl;

    return 0;
}