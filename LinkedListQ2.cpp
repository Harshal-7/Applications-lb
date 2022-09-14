#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLLL
{
    private:
        PNODE Head;

    public:
        SinglyLLL()
        {
            Head = NULL;
        }

        void InsertFirst(int iNo)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn -> data = iNo;
            newn -> next = NULL;

            if(Head == NULL)
            {
                Head = newn;
            }
            else
            {
                newn -> next = Head;
                Head = newn;
            }
        }
        
        void Display()
        {
            PNODE temp = Head;

            while(temp != NULL)
            {
                cout << "|" << temp -> data << "| -> ";
                temp = temp -> next;
            }

            cout << "NULL" << endl;

        }

};




            

int main()
{
    int iRet = 0;
    SinglyLLL obj;
    SinglyLLL obj2;

    // 1745
    obj.InsertFirst(5);
    obj.InsertFirst(4);
    obj.InsertFirst(7);
    obj.InsertFirst(1);

    // 3135
    obj2.InsertFirst(5);
    obj2.InsertFirst(3);
    obj2.InsertFirst(1);
    obj2.InsertFirst(3);

    cout<<endl;
    obj.Display();
    cout<<endl;
    obj2.Display();
    cout<<endl;

    // SinglyLLL ans;

    // struct node * l1 = list1;
    // struct node * l2 = list2;

    // int iNo1 = 0,iNo2 = 0;

    // while(l1 != NULL)
    // {
    //     iNo1 = (iNo1 * 10) + l1->data;
    //     l1 = l1->next;
    // }
    
    // while(l2 != NULL)
    // {
    //     iNo2 = (iNo2 * 10) + l2->data;
    //     l2 = l2->next;
    // }

    int iNo1 = 1745;
    int iNo2 = 3135;

    int iNum = iNo1 + iNo2;     // 4880

    cout << iNum << endl;

    SinglyLLL Ans;

    int iDigit = 0;
    
    while(iNum != 0)
    {
        Ans.InsertFirst(iNum % 10);
        iNum /= 10;
    }
    
    cout<<endl;
    Ans.Display();
    cout<<endl;

    return 0;
}