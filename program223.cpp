// QUEUE in generic

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue
{
    private:
        struct node<T> *Head;
        int Count;

    public:
        Queue();
        void Enqueue(T);        // Insert Last
        void Dequeue();         // Delete First
        void Display();
        int CountNode();
};

template <class T>
Queue<T>::Queue()
{
    Head = NULL;
    Count = 0;
}

template <class T>
void Queue<T>::Enqueue(T No)
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
void Queue<T>::Dequeue()       // Delete first
{
    T No;

    if(Count == 0)
    {
        cout << "Queue is Empty" << endl;
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
void Queue<T>::Display()
{
    cout << "\nElements from Queue are : " << endl;
    struct node<T> *temp = Head;

    while(temp != NULL)
    {
        cout << "|" << temp->data << "| -> ";
        temp = temp->next;
    }
    cout << endl;
}

template <class T>
int Queue<T>::CountNode()
{
    return Count;
}

int main()
{
    Queue <int> obj1;
    Queue <float> obj2;
    Queue <char> obj3;
    int Ret = 0;

    obj1.Enqueue(11);
    obj1.Enqueue(21);
    obj1.Enqueue(51);
    obj1.Enqueue(101);
    obj1.Display();
    Ret = obj1.CountNode();
    cout << "\nNumber of Elements in Queue : " << Ret << endl;
    
    obj1.Dequeue();
    obj1.Dequeue();
    obj1.Display();
    Ret = obj1.CountNode();
    cout << "\nNumber of Elements in Queue : " << Ret << endl;
    
    obj1.Dequeue();
    obj1.Dequeue();
    obj1.Display();
    Ret = obj1.CountNode();
    cout << "\nNumber of Elements in Queue : " << Ret << endl;
    

    return 0;
}