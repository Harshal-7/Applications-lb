// Generic Singly Linear Linked List
// Project Name (on resume) : Generic Data Structure Library

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLLL
{
    private:
        struct node<T> *Head;
        int Count;

    public:
        SinglyLLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtLast(T,int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int CountNode();
};

template <class T>
SinglyLLL<T>::SinglyLLL()
{
    Head = NULL;
    Count = 0;
}

template <class T>
void SinglyLLL<T>::InsertFirst(T No)
{
    struct node<T> *newn = NULL;
    newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;

    if(Count == 0)
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
void SinglyLLL<T>::InsertLast(T No)
{
    struct node<T> *newn = NULL;
    newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;

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

        temp->next = newn;
    }
    Count++;
}

template <class T>
void SinglyLLL<T>::InsertAtLast(T No,int iPos)
{

}

template <class T>
void SinglyLLL<T>::DeleteFirst()
{

}

template <class T>
void SinglyLLL<T>::DeleteLast()
{

}

template <class T>
void SinglyLLL<T>::DeleteAtPos(int iPos)
{

}

template <class T>
void SinglyLLL<T>::Display()
{
    cout << "Elements from Linked List are : " << endl;
    struct node<T> *temp = Head;

    while(temp != NULL)
    {
        cout << "|" << temp->data << "| -> ";
        temp = temp->next;
    }
    cout << endl;
}

template <class T>
int SinglyLLL<T>::CountNode()
{
    return Count;
}

int main()
{
    SinglyLLL <int> obj1;
    SinglyLLL <float> obj2;
    SinglyLLL <char> obj3;
    int Ret = 0;

    obj1.InsertFirst(20);
    obj1.InsertFirst(10);
    obj1.InsertLast(30);
    obj1.InsertLast(40);
    obj1.Display();
    cout << "Number of Nodes are " << obj1.CountNode() << endl;

    cout << endl;

    obj2.InsertFirst(60.12);
    obj2.InsertFirst(40.12);
    obj2.InsertLast(80.12);
    obj2.InsertLast(100.12);
    obj2.Display();
    cout << "Number of Nodes are " << obj1.CountNode() << endl;
    cout << endl;

    obj3.InsertFirst('B');
    obj3.InsertFirst('A');
    obj3.InsertLast('C');
    obj3.InsertLast('D');
    obj3.Display();
    cout << "Number of Nodes are " << obj1.CountNode() << endl;
    cout << endl;

    

    return 0;
}