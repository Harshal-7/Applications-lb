//  Count Leaf Node

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;

}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int iNo)
{
    PNODE temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)   // BTS is empty
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if(iNo > temp->data)        // R
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->lchild;

            }
            else if(iNo < temp->data)   // L
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;

            }
            else if(iNo == temp->data)  // Duplicate Data
            {
                free(newn);
                printf("Data is already there in BST\n");
                break;
            }

        }
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\t",Head->data);
        Inorder(Head->rchild);
    }
}

void Preorder(PNODE Head)
{   
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Inorder(Head->lchild);
        Inorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{   
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        Inorder(Head->rchild);
        printf("%d\t",Head->data);
    }    
}

bool Search(PNODE Head, int iNo)
{
    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            break;
        }
        else if(iNo > Head->data)
        {
            Head = Head->rchild;
        }
        else if(iNo < Head->data)
        {
            Head = Head->lchild;
        }
    }

    if(Head == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int CountLeafNode(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild == NULL) && (Head->rchild == NULL))
        {
            iCnt++;
        }
        CountLeafNode(Head->lchild);
        CountLeafNode(Head->rchild);
    }

    return iCnt;

}

int main()
{
    PNODE First = NULL;
    bool bRet = false;
    int iRet = 0;

    Insert(&First,11);
    Insert(&First,21);
    Insert(&First,7);

    //  7   11  21      L   D   R   //Inorder
    //  11  7   21      L   D   R   //Inorder
    //  7   21  11      L   D   R   //Inorder

    printf("Inorder Data\n");
    Inorder(First);

    printf("\nPreorder Data\n");
    Preorder(First);

    printf("\nPostorder Data\n");
    Postorder(First);

    printf("\n");

    bRet = Search(First,11);
    if(bRet == true)
    {
        printf("Element is there in Tree\n");
    }
    else
    {
        printf("Element is not there in Tree\n");
    }

    iRet = CountLeafNode(First);
    printf("Number of lead nodes are: %d\n",iRet);

    return 0;
}