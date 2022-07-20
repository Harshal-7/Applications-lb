//  Search Maximum Element from Linked List

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
    printf("NULL\n");
}

int Maximum(PNODE Head)
{
    int iMax = 0;

    if(Head != NULL)
    {
        iMax = Head->data;
    }

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    Display(First);

    iRet = Maximum(First);
    printf("Maximum Number is : %d\n",iRet);

    return 0;
}