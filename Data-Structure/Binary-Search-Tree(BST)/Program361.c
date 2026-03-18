#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE) malloc (sizeof(NODE));
    newn -> data = no;
    newn -> lchild = NULL;
    newn -> rchild = NULL;
    
    if(*head == NULL)        // Tree is Empty 
    {
        *head = newn;
        return;
    }
    
    temp = *head;
    
    while(1)
    {
        if(no > temp -> data)
        {
            if(temp -> rchild == NULL)
            {
                temp -> rchild = newn;
                break;
            }
            temp = temp -> rchild;
        }
        else if(no < temp -> data)
        {
            if(temp -> lchild == NULL)
            {
                temp -> lchild = newn;
                break;
            }
            temp = temp -> lchild;
        }
        else
        {
            free(newn);        // No Duplicate value 
            break;
        }
    }
}

void Inorder(PNODE head)
{
    if(head != NULL)
    {
        Inorder(head -> lchild);
        printf("%d\t",head -> data);
        Inorder(head -> rchild);
    }
}

void Preorder(PNODE head)
{
    if(head != NULL)
    {
        printf("%d\t",head -> data);
        Preorder(head -> lchild);
        Preorder(head -> rchild);
    }
}

void Postorder(PNODE head)
{
    if(head != NULL)
    {
        Postorder(head -> lchild);
        Postorder(head -> rchild);
        printf("%d\t",head -> data);
    }
}

bool Search(PNODE head, int no)
{
    bool bFlag = false;
    
    while(head != NULL)
    {
        if(no == head -> data)
        {
            bFlag = true;
            break;
        }
        else if(no > head -> data)
        {
            head = head -> rchild;
        }
        else 
        {
            head = head -> lchild;
        }
    }
    return bFlag;
}

int main()
{
    PNODE first = NULL;
    bool bRet = false;
    
    Insert(&first, 21);
    Insert(&first, 51);
    Insert(&first, 101);
    
    printf("Inorder\n");
    Inorder(first);
    printf("\n\n");
    
    printf("Preorder\n");
    Preorder(first);
    printf("\n\n");
    
    printf("Postorder\n");
    Postorder(first);
    printf("\n\n");
    
    bRet = Search(first, 51);
    
    if(bRet == true)
    {
        printf("Element is present in BST\n");
    }
    else
    {
        printf("There is no such Element is BST\n");
    }
    
    return 0;
}