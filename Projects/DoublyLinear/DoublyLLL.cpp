#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyLLL
{
    private:
        int Count;
        PNODE Head;
    
    public:
        DoublyLLL();
        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int CountNode();        
};

DoublyLLL::DoublyLLL()
{
    Head = NULL;
    Count = 0;
}

void DoublyLLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

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

void DoublyLLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;


    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(Count == 0)
    {
        Head = newn;
    }
    else
    {
        temp = Head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;

    }
    Count++;
}

void DoublyLLL::InsertAtPos(int No,int iPos)
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
        int iCnt = 0;
        PNODE temp = Head;
        PNODE newn = NULL;

        newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
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

void DoublyLLL::DeleteFirst()
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

void DoublyLLL::DeleteLast()
{
    PNODE temp = NULL;

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
        temp = Head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;

    }
    Count--;
}

void DoublyLLL::DeleteAtPos(int iPos)
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
        int iCnt = 0;
        PNODE temp = Head;
        
        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        Count--;
    }
}

void DoublyLLL::Display()
{
    PNODE temp = Head;
    while(temp != NULL)
    {
        cout << "|" << temp->data << "| -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int DoublyLLL::CountNode()
{
    return Count;
}

int main()
{
    int iRet = 0;
    DoublyLLL obj;

    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.Display();
    iRet = obj.CountNode();
    cout << "Number of Nodes : " << iRet << endl;

    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.Display();

    iRet = obj.CountNode();
    cout << "Number of Nodes : " << iRet << endl;

    obj.InsertAtPos(25,3);
    obj.InsertAtPos(27,4);
    obj.Display();

    iRet = obj.CountNode();
    cout << "Number of Nodes : " << iRet << endl;

    obj.DeleteAtPos(4);
    obj.DeleteAtPos(3);
    obj.Display();

    iRet = obj.CountNode();
    cout << "Number of Nodes : " << iRet << endl;

    obj.DeleteFirst();
    obj.DeleteFirst();
    obj.Display();
    obj.DeleteLast();
    obj.Display();

    iRet = obj.CountNode();
    cout << "Number of Nodes : " << iRet << endl;

    return 0;
}