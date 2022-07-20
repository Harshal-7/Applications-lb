#include<iostream>
using namespace std;

void rFun(int n)
{
    cout << "Inside rFun\n";
    if(n <= 1)
    {
        return;
    }
    else
    {
        rFun(n-1);
        cout << "n-1: " << (n) << endl;
        rFun(n-1);
    }
}

void fun(int n)
{
    int i = 0;
    int j = 0;
    int x = 0;
    int iCnt = 0;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= (i*i); j++)
        {
            for(x = 1; x <= n/2; x++)
            {
                iCnt++;
                // printf("n");
            }
        }
    }
    printf("iCnt : %d\n",iCnt);
}

void gun(int n)
{
    int i = 0, iCnt = 0;

    for(i = 1; i < n; i = i*2)
    {
        iCnt++;
    }

    printf("iCnt : %d\n",iCnt);

}

// void sun(int n)
// {
//     int i = 0, iCnt = 0;
    
//     for(i = (n/2); i <= n; i++)
//     {
//         for(j = 1; j = x/2)
//     }

// }

void run(int n)
{
    int i = 0, iCnt = 0, j = 0;
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j = j + 1)
        {
            iCnt++;
        }
    }
    printf("iCnt : %d\n",iCnt);
}


int main()
{
    // int iValue = 0;
    // cout << "Enter Number\n";
    // cin >> iValue;

    // rFun(iValue);

    gun(256);

    return 0;
}