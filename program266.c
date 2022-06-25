// Display Singly Linear Linked List using Recursion

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head != NULL)
    {
        newn -> next = *Head;
    }

    *Head = newn;

}

void Display(PNODE Head)
{
    if(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Display(Head -> next);
    }
    
}

int Count(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
        Count(Head);
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    printf("\n");

    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    return 0;
}