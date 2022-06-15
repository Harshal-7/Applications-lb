#include<iostream>
using namespace std;

class Numbers
{
    public:
        void SwapR(int &p,int &q)
        {
            int temp;

            temp = p;
            p = q;
            q = temp;
        }
};

int main()
{
    int iValue1 = 11, iValue2 = 21;

    cout << "Before Swap Data is : " << iValue1 << "  " << iValue2 << endl;

    Numbers obj;
    obj.SwapR(iValue1,iValue2);

    cout << "After Swap Data is : " << iValue1 << "  " << iValue2 << endl;

    return 0;
}