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

int Countnode(PNODE head)
{
    static int iCount = 0;
    
    if(head != NULL)
    {
        iCount++;
        Countnode(head -> lchild);
        Countnode(head -> rchild);
    }
    return iCount;
}

int CountParentnode(PNODE head)
{
    static int iCount = 0;
    
    if(head != NULL)
    {
        if((head -> lchild != NULL) || (head -> rchild != NULL))
        {
            iCount++;
        }
        CountParentnode(head -> lchild);
        CountParentnode(head -> rchild);
    }
    return iCount;
    
}

int CountLeafnode(PNODE head)
{
    static int iCount = 0;
    
    if(head != NULL)
    {
        if((head -> lchild == NULL) && (head -> rchild == NULL))
        {
            iCount++;
        }
        CountLeafnode(head -> lchild);
        CountLeafnode(head -> rchild);
    }
    return iCount;
}

int main()
{
    PNODE first = NULL;
    bool bRet = false;
    int iRet = 0;
    
    Insert(&first, 21);
    Insert(&first, 11);
    Insert(&first, 51);
    Insert(&first, 35);
    Insert(&first, 75);
    Insert(&first, 18);
    Insert(&first, 9);
    
    iRet = Countnode(first);
    printf("Number Of nodes are : %d\n",iRet);
    Countnode(NULL);
    
    iRet = CountParentnode(first);
    printf("Number Of parent node Are : %d\n",iRet);
    CountParentnode(NULL);
    
    iRet = CountLeafnode(first);
    printf("Number Of leaf node Are : %d\n",iRet);
    CountLeafnode(NULL);
    
    return 0;
}