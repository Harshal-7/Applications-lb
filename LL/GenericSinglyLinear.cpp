#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLinear
{
    public:
        struct node<T> *Head;
        int Count;

        SinglyLinear();
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
SinglyLinear<T>::SinglyLinear()
{
    Head = NULL;
    Count = 0;
}

template <class T>
void SinglyLinear<T>::InsertFirst(T Val)
{
    struct node<T> *newn = new struct node<T>;

    newn->data = Val;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }

    Count++;

}

template <class T>
void SinglyLinear<T>::InsertLast(T Val)
{
    struct node<T> *newn = new struct node<T>;

    newn->data = Val;
    newn->next = NULL;

    if(Head == NULL)
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

        temp->next = newn;
    }

    Count++;

}

template <class T>
void SinglyLinear<T>::InsertAtPos(T Val,int iPos)
{
    if((iPos < 1) or (iPos > Count+1))
    {
        cout << "Enter Valid Positoin\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Val);
    }
    else if(iPos == Count+1)
    {
        InsertLast(Val);
    }
    else
    {
        struct node<T> *newn = new struct node<T>;

        newn->data = Val;
        newn->next = NULL;

        struct node<T> *temp = Head;

        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        
        Count++;
    
    }
}


template <class T>
void SinglyLinear<T>::DeleteFirst()
{

}

template <class T>
void SinglyLinear<T>::DeleteLast()
{

}

template <class T>
void SinglyLinear<T>::DeleteAtPos(int)
{

}

template <class T>
void SinglyLinear<T>::Display()
{
    if(Head == NULL)
    {
        cout << "Linked List is Empty...\n";
        return;
    }

    struct node<T> *temp = Head;

    cout << "Elements from the Linked List are : \n" << endl;
    while(temp != NULL)
    {
        cout << "|" << temp->data << "| -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

template <class T>
int SinglyLinear<T>::CountNode()
{
    return Count;
}

int main()
{
    SinglyLinear<int>obj;

    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertLast(50);
    obj.InsertLast(60);
    
    obj.Display();
    cout << endl;

    obj.InsertFirst(20);
    obj.InsertFirst(10);
    
    obj.Display();
    cout << endl;
    
    obj.InsertLast(90);
    obj.InsertLast(100);    

    obj.Display();
    cout << endl;
    
    obj.InsertAtPos(70,7);
    obj.InsertAtPos(80,8);
    
    obj.Display();
    cout << endl;
    
    return 0;
}