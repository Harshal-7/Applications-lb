// Accept N numbers and return Largest number

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
        T Maximum();
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
T ArrayX<T>::Maximum()
{
    T Max = Arr[0];

    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    ArrayX <int> obj1(5);
    obj1.Accept();
    int iRet = 0;
    iRet  = obj1.Maximum();
    cout << "Largest number is : " << iRet << endl;

    ArrayX <float> obj2(5);
    obj2.Accept();
    float fRet = 0.0;
    fRet  = obj2.Maximum();
    cout << "Largest number is : " << fRet << endl;

    ArrayX <char> obj3(5);
    obj3.Accept();
    char cRet = '\0';
    cRet  = obj3.Maximum();
    cout << "Largest Character is : " << cRet << endl;

    return 0;
}