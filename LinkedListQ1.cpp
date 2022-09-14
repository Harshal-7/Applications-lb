#include<iostream> 
#include<list>
#include<iterator>
using namespace std;

void showlist(list<int> ll)
{
    list<int>::iterator it;
    cout << endl;
    
    for(it = ll.begin(); it != ll.end(); ++it)
    {
        cout << "|" << *it << "|  -  ";
    }
    
    cout << "\n" << endl;
}

list<int> FindSum(list<int> l1, list<int> l2)
{
    int iNo1 = 0,iNo2 = 0,iSum = 0;
    list<int>::iterator it;
    
    for(it = l1.begin(); it != l1.end(); it++)
    {
        iNo1 = (iNo1 * 10) + *it;
    }

    for(it = l2.begin(); it != l2.end(); it++)
    {
        iNo2 = (iNo2 * 10) + *it;
    }

    iSum = iNo1 + iNo2;
    
    list<int> lAns;

    while(iSum != 0)
    {
        lAns.push_front(iSum % 10);
        iSum /= 10;
    }

    return lAns;

}

int main()
{
    list<int> l1;
    list<int> l2;
    
    l1.push_back(5);
    l1.push_back(2);
    l1.push_back(9);
    l1.push_back(6);
    
    l2.push_back(9);
    l2.push_back(1);
    l2.push_back(4);
    l2.push_back(2);

    list<int> lRet;
    showlist(l1);
    showlist(l2);

    lRet = FindSum(l1,l2);
    showlist(lRet);

    return 0;
}