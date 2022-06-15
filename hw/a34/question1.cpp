// write Generic program to Multiply two numbers

#include<iostream>
using namespace std;

template <class T>
class Numbers
{
    private:
        T No1;
        T No2;
    public:
        void Accept();
        T Multiply();
};

template <class T>
void Numbers<T>::Accept()
{
    cout << "Enter First Number : " << endl;
    cin >> No1;
    cout << "Enter Second Number : " << endl;
    cin >> No2;
}

template <class T>
T Numbers<T>::Multiply()
{
    T Ans;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    Numbers<int>obj1;
    obj1.Accept();
    cout << "Multiplication is : " << obj1.Multiply() << endl;

    cout << endl;

    Numbers<float>obj2;
    obj2.Accept();
    cout << "Multiplication is : " << obj2.Multiply() << endl;

    return 0;
}