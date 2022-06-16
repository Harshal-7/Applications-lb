// STACK in generic

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Stack
{
    private:
        struct node<T> *Head;
        int Count;

    public:
        Stack();
        void Push(T);               // Insert First
        void Pop();                 // Delete First
        void Display();
        int CountNode();
};

template <class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}

template <class T>
void Stack<T>::Push(T No)
{
    struct node<T> *newn = NULL;
    newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;

    newn -> next = Head;
    Head = newn;

    Count++;
}

template <class T>
void Stack<T>::Pop()       // Delete first
{
    T No;

    if(Count == 0)
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    No = Head -> data;
    struct node<T> *temp = Head;
    Head = Head -> next;
    delete temp;

    Count--;
    cout << "\nRemoved Element is : " << No << endl;

}

template <class T>
void Stack<T>::Display()
{
    cout << "\nElements from Stack are : " << endl;
    struct node<T> *temp = Head;

    while(temp != NULL)
    {
        cout << "|" << temp->data << "| ";
        temp = temp->next;
    }
    cout << endl;
}

template <class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
    Stack <int> obj1;
    Stack <float> obj2;
    Stack <char> obj3;
    int Ret = 0;

    obj3.Push('A');
    obj3.Push('B');
    obj3.Push('C');
    obj3.Push('D');
    obj3.Display();
    Ret = obj3.CountNode();
    cout << "\nNumber of Elements in Stack : " << Ret << endl;
    
    obj3.Pop();
    obj3.Pop();
    obj3.Display();
    Ret = obj3.CountNode();
    cout << "\nNumber of Elements in Stack : " << Ret << endl;
    
    obj3.Push('Z');
    obj3.Pop();
    obj3.Pop();
    obj3.Display();
    Ret = obj3.CountNode();
    cout << "\nNumber of Elements in Stack : " << Ret << endl;
    

    return 0;
}