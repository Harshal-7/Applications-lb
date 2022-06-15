#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    private:
        T *Arr;
        int iSize;

    public:
        ArrayX(int size)
        {
            this->iSize = size;
            Arr = new T[this->iSize];
        }

        void Accept()
        {
            cout << "Enter Elements in Array : " << endl;
            
            for(int i = 0; i < this->iSize; i++)
            {
                cin >> Arr[i];
            }
        }

        void Display()
        {
            cout << "Values from Array are : " << endl;
            for(int i = 0; i < this->iSize; i++)
            {
                cout << Arr[i] << "\t";
            }
            cout << endl;
        }

        T Maximum()
        {
            T Max = Arr[0];

            for(int i = 0; i < this->iSize; i++)
            {
                if(Arr[i] > Max)
                {
                    Max = Arr[i];
                }
            }
            return Max;
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{
    ArrayX<int>obj1(5);
    obj1.Accept();
    obj1.Display();
    int iRet = obj1.Maximum();
    cout << "\nMaximum number in Array is : " << iRet << endl;

    cout << endl;

    ArrayX<float>obj2(5);
    obj2.Accept();
    obj2.Display();
    float fRet = obj2.Maximum();
    cout << "\nMaximum number in Array is : " << fRet << endl;

    return 0;
}