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

int SumLeftChain(PNODE head)
{
    int iCount = 0;
    PNODE temp = NULL;
    
    if(head == NULL)
    {
        return 0;
    }
    
    temp = head -> lchild;
    
    while(temp != NULL)
    {
        iCount = iCount + temp -> data;
        temp = temp -> lchild;
    }
    return iCount;
}

int SumRightChain(PNODE head)
{
    int iCount = 0;
    PNODE temp = NULL;
    
    if(head == NULL)
    {
        return 0;
    }
    
    temp = head -> rchild;
    
    while(temp != NULL)
    {
        iCount = iCount + temp -> data;
        temp = temp -> rchild;
    }
    return iCount;
}

int Height(PNODE head)
{
    int ileft = 0, iright = 0, iCount = 0;
    
    if(head == NULL)
    {
        return 0;
    }
    
    ileft = Height(head -> lchild);
    iright = Height(head -> rchild);
    
    if(ileft > iright)
    {
        iCount = ileft + 1;
    }
    else
    {
        iCount = iright + 1;
    }
    return iCount;
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
    
    iRet = SumLeftChain(first);
    printf("Addition Of Left chain is : %d\n",iRet);
    
    iRet = SumRightChain(first);
    printf("Addition Of Right chain is : %d\n",iRet);
    
    iRet = Height(first);
    printf("Height of Bst is : %d\n",iRet);
    
    return 0;
}