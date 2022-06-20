#include<iostream>
using namespace std;

template <class T>
struct node
{
    int data;
    struct node *next;
};

template <class T>
class GenericSC
{
    private:
        int Count;
        struct node<T> *Head;
        struct node<T> *Tail;

    public:
        GenericSC();
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
GenericSC<T>::GenericSC()
{
    Head = NULL;
    Tail = NULL;
    Count = 0;
}

template <class T>
void GenericSC<T>::InsertFirst(T No)
{

}

template <class T>
void GenericSC<T>::InsertLast(T No)
{

}

template <class T>
void GenericSC<T>::InsertAtPos(T No,int iPos)
{

}

template <class T>
void GenericSC<T>::DeleteFirst()
{

}

template <class T>
void GenericSC<T>::DeleteLast()
{

}

template <class T>
void GenericSC<T>::DeleteAtPos(int iPos)
{

}

template <class T>
void GenericSC<T>::Display()
{

}

template <class T>
int GenericSC<T>::CountNode()
{
    return Count;
}

int main()
{
    GenericSC<int>obj;

    return 0;
}