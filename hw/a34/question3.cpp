// Accept N numbers and return Addition of that N numbers

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
        T Addition(T);
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
T ArrayX<T>::Addition(T Num)
{
    T Sum = Num;

    for(int i = 0; i < iSize; i++)
    {
        Sum = Arr[i] + Sum;
    }
    return Sum;
}

int main()
{
    ArrayX <int> obj1(5);
    obj1.Accept();
    int iRet = 0;
    iRet  = obj1.Addition(0);
    cout << "Addition of N numbers is : " << iRet << endl;


    ArrayX <float> obj2(5);
    obj2.Accept();
    float fRet = 0.0;
    fRet  = obj2.Addition(0.0);
    cout << "Addition of N numbers is : " << fRet << endl;

    return 0;
}