#include<iostream>
#include <iterator>
#include <list>
using namespace std;

void showlist(list<int> ll)
{
    list<int>::iterator i;

    for(i = ll.begin(); i != ll.end(); i++)
    {
        cout << "|" << *i << "|  -  ";
    }
    cout << '\n';
}

list<int> FindSum(list<int> list1,list<int> list2)
{
    int iNo1 = 0, iNo2 = 0, iDigit = 0;
    list<int>::iterator i;
    list<int>::iterator j;
    list<int> lAns;

    for(i = list1.begin(); i != list1.end(); ++i)
    {
        iNo1 = (iNo1 * 10) + *i;

    }

    for(j = list2.begin(); j != list2.end(); ++j)
    {
        iNo2 = (iNo2 * 10) + *j;
    }

    int iSum = iNo1 + iNo2;

    cout << iNo1 << endl;
    cout << iNo2 << endl;
    cout << iSum << endl;

    while(iSum != 0)
    {
        iDigit = iSum % 10;
        lAns.push_front(iDigit);
        iSum = iSum / 10;
    }

    return lAns;

}

int main()
{
    int iValue = 0;

    list<int> lList1;
    list<int> lList2;
    list<int> lRet;

    lList1.push_back(5);
    lList1.push_back(4);
    lList1.push_back(6);

    lList2.push_back(6);
    lList2.push_back(7);
    lList2.push_back(3);

    lRet = FindSum(lList1,lList2);
    cout << endl;
    showlist(lRet);
    cout << endl;

    return 0;
}