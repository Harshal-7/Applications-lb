//  Return Middle Element from Linked List  [ELEGENT!!!]

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
    PNODE Fast = Head;
    PNODE Slow = Head;

    while((Fast != NULL) && (Fast->next != NULL))
    {
        Fast = Fast->next->next;
        Slow = Slow->next;
    }
    return Slow->data;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    PNODE First = NULL;
    InsertFirst(&First,6);
    InsertFirst(&First,28);
    InsertFirst(&First,496);
    InsertFirst(&First,69);
    InsertFirst(&First,30);
    InsertFirst(&First,128);
    InsertFirst(&First,11);
    Display(First);

    iRet = SearchMiddle(First);
    printf("Middle Element is : %d\n",iRet);    

    return 0;
}