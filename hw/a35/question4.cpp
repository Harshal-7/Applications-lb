// Accept N Value and Search Last Occurance of Any specific value

#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    private:
        T *Arr;
        int iSize;
        T Search;
    
    public:
        ArrayX(int);
        ~ArrayX();

        void Accept();
        int LastOcc();
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

    cout << "Value to Search : " << endl;
    cin >> Search;
}

template <class T>
int ArrayX<T>::LastOcc()
{
    int iCnt = 0;
    
    for(iCnt = (iSize - 1); iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == Search)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    ArrayX <int> obj1(10);
    obj1.Accept();
    int iRet = 0;
    iRet  = obj1.LastOcc();
    cout << "Last Occurance is : " << iRet << endl;

    ArrayX <float> obj2(10);
    obj2.Accept();
    float fRet = 0.0;
    fRet  = obj2.LastOcc();
    cout << "Last Occurance is : " << fRet << endl;

    return 0;
}