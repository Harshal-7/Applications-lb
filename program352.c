//  Insert Node in Linked List in Incresing order of their data
//  Input:      15 -> 25 -> 10 -> 35 -> 5
//  Output:     5  -> 10 -> 15 -> 25 -> 35

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

void DeleteEven(PPNODE Head)
{
    PNODE First = NULL;
    PNODE Second = NULL;
    PNODE temp = NULL;

    if(*Head == NULL)       // LL is empty
    {
        return;
    }

    if((*Head)->next == NULL)   // LL contains one node
    {
        if(((*Head)->data) % 2 == 0)
        {
            free(*Head);
            *Head = NULL;
            return;
        }
        else
        {
            return;
        }
    }

    First = *Head;
    Second = (*Head)->next;

    while(Second != NULL)
    {
        if((Second->data) % 2 == 0)
        {
            temp = Second;
            First->next = Second->next;
            free(Second);
            Second = First->next;
        }
        else
        {
            First = Second;
            Second = First->next;
        }
    }

    if((*Head)->data % 2 == 0)
    {
        temp = *Head;
        *Head = (*Head)->next;
        free(temp);
    }

}

int main()
{
    int iRet = 0;
    int iValue = 0;

    PNODE First = NULL;
    // InsertFirst(&First,13);
    // InsertFirst(&First,50);
    // InsertFirst(&First,40);
    // InsertFirst(&First,35);
    // InsertFirst(&First,22);
    // InsertFirst(&First,12);  

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    DeleteEven(&First);
    Display(First);


    return 0;
}