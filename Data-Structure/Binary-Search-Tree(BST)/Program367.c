#include<stdio.h>
#include<stdlib.h>

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
    
    if(*head == NULL)
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
            free(newn);
            break;
        }
    }
}

int Max(PNODE head)
{
    PNODE temp = NULL;
    
    if(head == NULL)
    {
        return -1;
    }
    
    temp = head;
    
    while(temp -> rchild != NULL)
    {
        temp = temp -> rchild;
    }
    return temp -> data;
}

int Min(PNODE head)
{
    PNODE temp = NULL;
    
    if(head == NULL)
    {
        return -1;
    }
    
    temp = head;
    
    while(temp -> lchild != NULL)
    {
        temp = temp -> lchild;
    }
    return temp -> data;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    
    Insert(&first, 21);
    Insert(&first, 11);
    Insert(&first, 51);
    Insert(&first, 35);
    Insert(&first, 75);
    Insert(&first, 18);
    Insert(&first, 9);
    
    iRet = Max(first);
    printf("Maximum Number is : %d\n",iRet);
    
    iRet = Min(first);
    printf("Minimum Number is : %d\n",iRet);
    
    return 0;
}