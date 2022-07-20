//  Accept 1 Number & return Frequency of that Number from Linked List

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

int Frequency(PNODE Head,int iNo)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            iCnt++;
        }
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    PNODE First = NULL;
    InsertFirst(&First,50);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    Display(First);

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = Frequency(First,iValue);
    printf("Frequency is : %d\n",iRet);

    return 0;
}