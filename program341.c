//  Search First Occurance from Linked List

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

int FirstOccurance(PNODE Head,int iNo)
{
    int iPos = 0;

    while(Head != NULL)
    {
        iPos++;

        if(Head->data == iNo)
        {
            break;
        }
        Head = Head->next;
    }

    if(Head == NULL)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
}


int main()
{
    int iRet = 0;
    int iValue = 0;

    PNODE First = NULL;
    InsertFirst(&First,6);
    InsertFirst(&First,28);
    InsertFirst(&First,496);
    InsertFirst(&First,6);
    InsertFirst(&First,22);
    InsertFirst(&First,128);
    Display(First);

    iRet = FirstOccurance(First,6);
    
    if(iRet == -1)
    {
        printf("There is no such element!!");
    }
    else
    {
        printf("Element is there at Index : %d\n",iRet);
    }

    return 0;
}