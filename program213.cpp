#include<iostream>
using namespace std;

template <class T>
void SwapR(T &p,T &q)
{
    T temp;

    temp = p;
    p = q;
    q = temp;
}

int main()
{
    int iValue1 = 11, iValue2 = 21;

    cout << "Before Swap Data is : " << iValue1 << "  " << iValue2 << endl;

    SwapR(iValue1,iValue2);

    cout << "After Swap Data is : " << iValue1 << "  " << iValue2 << endl;

    return 0;
}