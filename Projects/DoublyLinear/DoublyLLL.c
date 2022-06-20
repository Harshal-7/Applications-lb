#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = (Head)->next;
    }
    printf("NULL\n");
}

int Count(PPNODE Head)
{
    int iCnt = 0;
    PNODE temp = *Head;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}


void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = (*Head)->prev;
    }
}

void InsertLast(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        newn->prev = temp;
        temp->next = newn;

    }
}

void DeleteFirst(PPNODE Head)
{
    if(Head == NULL)
    {
        return;
    }

    *Head = (*Head)->next;
    free((*Head)->prev);
    (*Head)->prev = NULL;   

}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(Head == NULL)
    {
        return;
    }

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = NULL;

}

void InsertAtPos(PPNODE Head,int No,int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iSize = 0;

    iSize = Count(Head);

    if((iPos < 1) || (iPos > iSize + 1))
    {
        return;
        printf("Invalid Posiiton\n");
    }

    if(iPos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(iPos == (iSize + 1))
    {
        InsertLast(Head,No);
    }
    else
    {
        int iCnt = 0;

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *Head;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;

    }
}


void DeleteAtPos(PPNODE Head,int iPos)
{
    PNODE temp = NULL;
    PNODE tempX = NULL;

    int iSize = 0;

    iSize = Count(Head);

    if((iPos < 1) || (iPos > iSize))
    {
        return;
        printf("Invalid Posiiton\n");
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        int iCnt = 0;

        temp = *Head;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp->next;

        temp->next = tempX->next;
        free(tempX);
        temp->next->prev = temp;

    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    Display(First);

    InsertLast(&First,40);
    InsertLast(&First,50);
    Display(First);

    InsertAtPos(&First,25,3);
    InsertAtPos(&First,27,4);
    Display(First);

    DeleteAtPos(&First,4);
    DeleteAtPos(&First,3);
    Display(First);

    DeleteFirst(&First);
    DeleteFirst(&First);
    Display(First);
    DeleteLast(&First);
    Display(First);

    return 0;
}