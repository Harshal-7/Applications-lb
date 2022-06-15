#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[],int Size)
{
    T Max = Arr[0];
    int i = 0;

    for(i = 0; i < Size; i++)
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
    int Brr[] = {10,20,30,40,50};
    int iRet = 0;
    iRet = Maximum(Brr,5);
    cout << "Maximum number is : " << iRet << endl;
    
    float Crr[] = {10.11,20.22,30.33,62.44,520.55};
    float fRet = 0;
    fRet = Maximum(Crr,5);
    cout << "Maximum number is : " << fRet << endl;

    int num = 0;
    int i = 0;
    cout << "Enter N number : " << endl;
    cin >> num;

    float *ptr = NULL;
    ptr = new float[num];

    cout << "Enter elemetns in array" << endl;
    for(i = 0; i < num; i++)
    {
        cin >> ptr[i];
    }

    float ret = Maximum(ptr,num);
    cout << "Maximum number is : " << ret << endl;

    return 0;
}