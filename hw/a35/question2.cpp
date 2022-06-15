// Accept N Value and count frequency of any specific that Value

#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    private:
        T *Arr;
        int iSize;
        T ChkValue;
    
    public:
        ArrayX(int);
        ~ArrayX();

        void Accept();
        int Frequency();
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

    cout << "Value to check Frequency : " << endl;
    cin >> ChkValue;
}

template <class T>
int ArrayX<T>::Frequency()
{
    int Cnt = 0;
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == ChkValue)
        {
            Cnt++;
        }
    }
    return Cnt;
}

int main()
{
    ArrayX <int> obj1(10);
    obj1.Accept();
    int iRet = 0;
    iRet  = obj1.Frequency();
    cout << "Frequency is : " << iRet << endl;

    ArrayX <float> obj2(10);
    obj2.Accept();
    float fRet = 0.0;
    fRet  = obj2.Frequency();
    cout << "Frequency is : " << fRet << endl;

    return 0;
}