//  Display Addition of factors of each number from Linked List

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

void DisplaySumFactors(PNODE Head)
{
    int iSum = 0;
    int iNo = 0;
    int i = 0;
    while(Head != NULL)
    {
        for(i = 1,iSum = 0,iNo = Head->data; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
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
    InsertFirst(&First,50);
    InsertFirst(&First,20);
    InsertFirst(&First,38);
    InsertFirst(&First,24);
    InsertFirst(&First,22);
    Display(First);

    DisplaySumFactors(First);

    return 0;
}