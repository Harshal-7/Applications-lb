#include<iostream>
using namespace std;

template <class T>
void SwapA(T *p,T *q)
{
    T temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int iValue1 = 11, iValue2 = 21;
    cout << "Before Swap Data is : " << iValue1 << "  " << iValue2 << endl;
    SwapA(&iValue1,&iValue2);
    cout << "After Swap Data is :  " << iValue1 << "  " << iValue2 << endl;


    float fValue1 = 11.45, fValue2 = 21.32;
    cout << "Before Swap Data is : " << fValue1 << "  " << fValue2 << endl;
    SwapA(&fValue1,&fValue2);
    cout << "After Swap Data is :  " << fValue1 << "  " << fValue2 << endl;

    char cValue1 = 'A', cValue2 = 'B';
    cout << "Before Swap Data is : " << cValue1 << "  " << cValue2 << endl;
    SwapA(&cValue1,&cValue2);
    cout << "After Swap Data is :  " << cValue1 << "  " << cValue2 << endl;

    return 0;
}