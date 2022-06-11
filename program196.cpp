// Doubly Circular LL

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

class DoublyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
        int CountNode;

    public:
        DoublyCLL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();

};

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

    if(CountNode == 0)            //(Head == NULL) && (Tail == NULL)
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

    if(CountNode == 0)            //(Head == NULL) && (Tail == NULL)
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
    else if(iPos == CountNode + 1)
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

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
        newn->next->prev = newn;

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

        Head -> prev = Tail;
        Tail -> next = Head;
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

        Tail -> next = Head;
        Head -> prev = Tail;
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

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        CountNode++;
    }

}

void DoublyCLL::Display()
{
    PNODE temp = Head;
    int i = 0;

    if(CountNode == 0)
    {
        cout << "Linked list is empty" << endl;
    }

    for(i = 1; i <= CountNode; i++)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }

    cout << endl;

}

int DoublyCLL::Count()
{
    return CountNode;
}


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