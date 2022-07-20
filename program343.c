//  Return Middle Element from Linked List

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

int SearchMiddle(PNODE Head)
{
    int CountNode = 0;
    int i = 0;

    PNODE temp = Head;

    while(temp != NULL)
    {
        CountNode++;
        temp = temp->next;
    }

    for(i = 1; i <= CountNode/2; i++)
    {
        Head = Head->next;

        if(i == CountNode/2)
        {
            break;
        }
    }

    return Head->data;
}


int main()
{
    int iRet = 0;
    int iValue = 0;

    PNODE First = NULL;
    // InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    Display(First);

    iRet = SearchMiddle(First);
    printf("Middle Element is : %d\n",iRet);    

    return 0;
}