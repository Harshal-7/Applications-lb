//  Reverse the Linked List

#include<stdio.h>
#include<stdlib.h>

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

int main()
{
    int iRet = 0;
    int iValue = 0;

    PNODE First = NULL;
    InsertFirst(&First,70);
    InsertFirst(&First,60);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    Display(First);

    Reverse(&First);
    Display(First);
  

    return 0;
}