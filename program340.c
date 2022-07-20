//  Display Addition of every Element from Linked List

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

void SumDigits(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->data;
        iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }
        printf("%d : %d\n",Head->data,iSum);
        Head = Head->next;
    }
}


int main()
{
    int iRet = 0;
    int iValue = 0;

    PNODE First = NULL;
    InsertFirst(&First,28);
    InsertFirst(&First,6);
    InsertFirst(&First,496);
    InsertFirst(&First,24);
    InsertFirst(&First,22);
    InsertFirst(&First,128);
    Display(First);

    SumDigits(First);

    return 0;
}