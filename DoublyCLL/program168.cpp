#include "Header168.h"

int main()
{
    DoublyCLL obj;
    int iRet = 0;

    cout << endl;


    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes is : " << iRet << endl;

    cout << endl;

    obj.InsertLast(70);
    obj.InsertLast(80);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes is : " << iRet << endl;

    cout << endl;

    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.InsertLast(90);
    obj.InsertLast(100);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes is : " << iRet << endl;

    cout << endl;

    obj.InsertAtPos(50,5);
    obj.InsertAtPos(60,6);
    obj.Display();    
    iRet = obj.Count();
    cout << "Number of Nodes is : " << iRet << endl;

    cout << endl;

    obj.DeleteAtPos(6);
    obj.DeleteAtPos(5);    
    obj.Display();    
    iRet = obj.Count();
    cout << "Number of Nodes is : " << iRet << endl;

    cout << endl;

    obj.DeleteFirst();
    obj.DeleteFirst();
    obj.DeleteLast();
    obj.DeleteLast();    
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes is : " << iRet << endl;

    cout << endl;

    return 0;
}