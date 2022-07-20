//  Detect Weather Loop is there or Not Linked List
//  [100  ->  200  ->  300  ->  400  ->  500  ->  300]

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node * next;

}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head) != NULL)
    {
        newn->next = (*Head);
    }
    (*Head) = newn;
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are:\n");
    
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n\n");
}

void Reverse(PPNODE Head)
{
    PNODE Previous = NULL;
    PNODE Current = *Head;
    PNODE Next = NULL;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Next;
    }
    *Head = Previous;
}

bool CheckLoop(PNODE Head)
{
    PNODE Fast = Head;
    PNODE Slow = Head;
    bool bFlag = false;

    while((Fast != NULL) && (Fast->next != NULL))
    {
        Slow = Slow -> next;
        Fast = (Fast -> next) -> next;

        if(Fast == Slow)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;
    bool bRet = false;

    PNODE Third = NULL;
    PNODE Last = NULL;

    // InsertFirst(&First,70);
    // InsertFirst(&First,60);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Third = First;
    Last = First;

    Third = Third->next->next;              // 300
    Last = Last->next->next->next->next;    // 500
    Last->next = Third;

    bRet = CheckLoop(First);

    if(bRet == true)
    {
        printf("There is a loop in Linked List\n");
    }
    else
    {
        printf("There is No loop in Linked List\n");
    }
  

    return 0;
}