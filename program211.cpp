#include<iostream>
using namespace std;

class Numbers
{
    private:
        int *p;
        int *q;

    public:
        Numbers(int *a,int *b)
        {
            p = a;
            q = b;
        }
        void SwapA()
        {
            int temp;

            temp = *p;
            *p = *q;
            *q = temp;
        }
};

int main()
{
    int iValue1 = 11, iValue2 = 21;

    cout << "Before Swap Data is : " << iValue1 << "  " << iValue2 << endl;

    Numbers obj(&iValue1,&iValue2);
    obj.SwapA();

    cout << "After Swap Data is : " << iValue1 << "  " << iValue2 << endl;

    return 0;
}