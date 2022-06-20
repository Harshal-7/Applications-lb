#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
    struct node * prev;
};

template <class T>
class DoublyLLL
{
    private:
        struct node<T> * Head;
        int Count;

    public:
        DoublyLLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int CountNode();    

};

template <class T>
DoublyLLL<T>::DoublyLLL()
{
    Head = NULL;
    Count = 0;
}

template <class T>
void DoublyLLL<T>::InsertFirst(T No)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(Count == 0)
    {
        Head = newn;
    }
    else
    {
        newn->next = Head;
        Head->prev = newn;
        Head = Head->prev;
    }

    Count++;

}

template <class T>
void DoublyLLL<T>::InsertLast(T No)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(Count == 0)
    {
        Head = newn;
    }
    else
    {
        struct node<T> *temp = Head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        newn->prev = temp;
        temp->next = newn;
    }

    Count++;

}

template <class T>
void DoublyLLL<T>::InsertAtPos(T No,int iPos)
{
    int iSize = 0;

    iSize = CountNode();

    if((iPos < 1) || (iPos > iSize + 1))
    {
        cout << "Invalid Position !!" << endl;
        return;
    }
    
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iSize + 1)
    {
        InsertLast(No);
    }
    else
    {
        struct node<T> *temp = Head;
        struct node<T> *newn = NULL;

        newn = new struct node<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;

        Count++;
    }

}

template <class T>
void DoublyLLL<T>::DeleteFirst()
{
    if(Count == 0)
    {
        return;
    }
    else if(Count == 1)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        Head = Head->next;
        delete Head->prev;
        Head->prev = NULL;
    }

    Count--;

}

template <class T>
void DoublyLLL<T>::DeleteLast()
{
    if(Count == 0)
    {
        return;
    }
    else if(Count == 1)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        struct node<T> *temp = Head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    Count--;

}

template <class T>
void DoublyLLL<T>::DeleteAtPos(int iPos)
{
    int iSize = 0;

    iSize = CountNode();

    if((iPos < 1) || (iPos > iSize))
    {
        cout << "Invalid Position !!" << endl;
        return;
    }
    
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> *temp = Head;

        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        Count--;
    }

}

template <class T>
void DoublyLLL<T>::Display()
{
    struct node<T> *temp = NULL;

    temp = Head;

    if(Count == 0)
    {
        cout << "Linked List is Empty!" << endl;
        return;
    }

    while(temp != NULL)
    {
        cout << "|" << temp->data << "| - ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

template <class T>
int DoublyLLL<T>::CountNode()
{
    return Count;
}

int main()
{
    DoublyLLL<char>obj;
    int iRet = 0;

    obj.InsertFirst('C');
    obj.InsertFirst('B');
    obj.InsertFirst('A');
    obj.Display();
    iRet = obj.CountNode();
    cout << "\nNumber of Nodes : " << iRet << endl;
    cout << endl;

    obj.InsertLast('F');
    obj.InsertLast('G');
    obj.InsertLast('H');
    obj.Display();
    iRet = obj.CountNode();
    cout << "\nNumber of Nodes : " << iRet << endl;
    cout << endl;

    obj.InsertAtPos('D',4);
    obj.InsertAtPos('E',5);
    obj.Display();
    iRet = obj.CountNode();
    cout << "\nNumber of Nodes : " << iRet << endl;
    cout << endl;

    obj.DeleteAtPos(5);
    obj.DeleteAtPos(4);
    obj.Display();
    iRet = obj.CountNode();
    cout << "\nNumber of Nodes : " << iRet << endl;
    cout << endl;

    obj.DeleteFirst();
    obj.DeleteFirst();
    obj.DeleteLast();
    obj.DeleteLast();
    obj.Display();
    iRet = obj.CountNode();
    cout << "\nNumber of Nodes : " << iRet << endl;
    cout << endl;

    return 0;
}