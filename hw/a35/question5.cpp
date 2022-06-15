// Accept N Value and Reverse the Context
// NAHI JAMAl

#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    private:
        T *Arr;
        int iSize;
    
    public:
        ArrayX(int);
        ~ArrayX();

        void Accept();
        void Reverse();
};

template <class T>
ArrayX<T>::ArrayX(int size)
{
    iSize = size;
    Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    cout << "Enter Elements in Array : " << endl;
    
    for(int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

template <class T>
void ArrayX<T>::Reverse()
{
    T *start = Arr;
    T *end = Arr;
    T temp;

    while(*end != Arr[iSize-1])
    {
        end++;
    }

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
    }

    for(int i = 0; i < iSize; i++)
    {
        cout << Arr[i];
    }
}

int main()
{
    ArrayX <int> obj1(10);
    obj1.Accept();
    int iRet = 0;
    obj1.Reverse();

    ArrayX <float> obj2(10);
    obj2.Accept();
    float fRet = 0.0;
    obj2.Reverse();

    return 0;
}