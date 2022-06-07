#include "Header168.h"

DoublyCLL::DoublyCLL()
{
    Head = NULL;
    Tail = NULL;
    CountNode = 0;
}

void DoublyCLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(CountNode == 0)
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn -> next = Head;
        Head -> prev = newn;
        Head = newn;
    }

    Head -> prev = Tail;
    Tail -> next = Head;
    
    CountNode++;

}

void DoublyCLL::InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(CountNode == 0)
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        Tail -> next = newn;
        newn -> prev = Tail;
        Tail = newn;
    }

    Head -> prev = Tail;
    Tail -> next = Head;

    CountNode++;

}

void DoublyCLL::InsertAtPos(int iNo,int iPos)
{
    if((iPos < 1) || (iPos > (CountNode + 1)))
    {
        cout << "Invalid Position" << endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (CountNode + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = NULL;

        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        PNODE temp = Head;
        
        int i = 0;

        for(i = 1; i < (iPos - 1); i++)
        {
            temp = temp -> next;
        }
        
        newn -> next = temp -> next;
        (temp -> next) -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;

        CountNode++;

    }

}

void DoublyCLL::DeleteFirst()
{
    if(CountNode == 0)
    {
        return;
    }
    else if(CountNode == 1)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head -> next;
        delete Head -> prev;

        Tail -> next = Head;
        Head -> prev = Tail;
    }

    CountNode--;

}

void DoublyCLL::DeleteLast()
{
    if(CountNode == 0)
    {
        return;
    }
    else if(CountNode == 1)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Tail = Tail -> prev;
        delete Tail -> next;

        Head -> prev = Tail;
        Tail -> next = Head;
    }

    CountNode--;

}

void DoublyCLL::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > CountNode))
    {
        cout << "Invalid Position" << endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == CountNode)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = Head;
        int i = 0;

        for(i = 1; i < (iPos - 1); i++)
        {
            temp = temp -> next;
        }

        temp -> next = (temp -> next) -> next;
        delete (temp -> next) -> prev;
        (temp -> next) -> prev = temp;
        
        CountNode--;
    }

}

void DoublyCLL::Display()
{
    PNODE temp = Head;
    int i = 0;

    if(CountNode == 0)
    {
        cout << "Linked List is Empty" << endl;
        return;
    }

    for(i = 1; i <= CountNode; i++)
    {
        cout << "|" << temp->data << "| -> ";
        temp = temp -> next;
    }

    cout << endl;

}

int DoublyCLL::Count()
{
    return CountNode;
}