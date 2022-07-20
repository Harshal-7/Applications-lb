//  BST

#include<stdio.h>
#include<stdlib.h>

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



int main()
{
    PNODE First = NULL;

    Insert(&First,11);
    Insert(&First,21);
    Insert(&First,7);

    //  7   11  21      L   D   R   //Inorder
    //  11  7   21      L   D   R   //Inorder
    //  7   21  11      L   D   R   //Inorder

    printf("\nInorder Data\n");
    Inorder(First);

    printf("\nPreorder Data\n");
    Preorder(First);

    printf("\nPostorder Data\n");
    Postorder(First);

    return 0;
}