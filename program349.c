//  Delete Even Element nodes from Linked List

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
    PNODE Previous = NULL;
    PNODE tempHead = *Head;
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    while(tempHead != NULL)
    {        
        if(tempHead->data % 2 == 0)
        {
            if(tempHead -> next != NULL)
            {
                tempHead->data = tempHead->next->data;
                temp = tempHead->next;
                tempHead->next = temp->next;
                free(temp);
            }
            else
            {
                Previous->next = NULL;
                free(tempHead);

            }
        }
        else
        {
            Previous = tempHead;
            tempHead = tempHead->next;
        }
    }
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    PNODE First = NULL;
    InsertFirst(&First,63);
    InsertFirst(&First,56);
    InsertFirst(&First,49);
    InsertFirst(&First,35);
    InsertFirst(&First,22);
    InsertFirst(&First,12);

    Display(First);

    DeleteEven(&First);
    Display(First);


    return 0;
}