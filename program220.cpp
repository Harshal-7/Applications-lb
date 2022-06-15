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
        void Display();
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
void ArrayX<T>::Display()
{
    cout << "Values from Array are : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cout << Arr[i] << "\t";
    }
    cout << endl;
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
    obj1.Display();
    int iRet = obj1.Maximum();
    cout << "\nMaximum number in Array is : " << iRet << endl<<endl;

    cout << endl;

    ArrayX<float>obj2(5);
    obj2.Accept();
    obj2.Display();
    float fRet = obj2.Maximum();
    cout << "\nMaximum number in Array is : " << fRet << endl;

    return 0;
}