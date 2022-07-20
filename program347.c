//  Display Perfect Number from Linked List (factors addition is equal to that number)

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

void DisplayPerfect(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int i = 0;

    while(Head != NULL)
    {
        for(i = 1,iNo = Head->data,iSum = 0; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == iNo)
        {
            printf("%d is a perfect number\n",Head->data); 
        }

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

    DisplayPerfect(First);

    return 0;
}