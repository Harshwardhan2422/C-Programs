#include<stdio.h>

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

int main()
{
    PNODE first = NULL;
    
    Insert(&first, 21);
    Insert(&first, 51);
    Insert(&first, 101);

    return 0;
}