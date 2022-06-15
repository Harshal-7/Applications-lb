// write Generic program accept 1 value & 1 number print that value that number of times

#include<iostream>
using namespace std;

template <class T>
class Numbers
{
    private:
        T Val;
        int Num;
    public:
        void Accept();
        void Display();
};

template <class T>
void Numbers<T>::Accept()
{
    cout << "Enter Any Value : " << endl;
    cin >> Val;
    cout << "Enter Number : " << endl;
    cin >> Num;
}

template <class T>
void Numbers<T>::Display()
{
    for(int i = 1; i <= Num; i++)
    {
        cout << Val << "\t";
    }
    cout << endl;
}

int main()
{
    Numbers<int>obj1;
    obj1.Accept();
    obj1.Display();

    cout << endl;

    Numbers<float>obj2;
    obj2.Accept();
    obj2.Display();

    cout << endl;

    Numbers<char>obj3;
    obj3.Accept();
    obj3.Display();

    return 0;
}