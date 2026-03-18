#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
    
    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        (*head) -> prev = newn;
        *head = newn;
    }
}

void InsertLast(PPNODE head,int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    
    newn = (PNODE) malloc (sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
    
    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;
    }
}

void Display(PNODE head)
{
    printf("NULL");
    while(head != NULL)
    {
        printf("<=>|%d|",head -> data);
        head = head -> next;
    }
    printf("NULL\n");
}

 int Count(PNODE head)
{
    int iCount = 0;
    
    while(head != NULL)
    {
        iCount++;
        head = head -> next;
    }
    return iCount;
}

void DeleteFirst(PPNODE head)
{
    if(*head == NULL)
    {
        return;
    }
    else if((*head) -> next == NULL)
    {
         free(*head);
        *head = NULL;
        
    }
    else
    {
        *head = (*head) -> next;
        free((*head) -> prev);        
        (*head) -> prev = NULL;      
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    
    if(*head == NULL)
    {
        return;
    }
    else if((*head) -> next == NULL)
    {
         free(*head);
        *head = NULL;
        
    }
    else
    {
        temp = *head;
        
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE head, int no, int ipos)
{
    int Countnode = 0, i = 0;
    Countnode = Count(*head);
    
    PNODE temp = NULL;
    PNODE target = NULL;
    PNODE newn = NULL;
    
    newn = (PNODE) malloc (sizeof(NODE));
    newn -> data = no;
    
    if((ipos < 1) ||(ipos > Countnode + 1))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(head,no);
    }
    else if(ipos == Countnode + 1)
    {
        InsertLast(head, no);
    }
    else
    {
        temp = *head;
        
        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
        
    }
}

void DeleteAtPos(PPNODE head, int ipos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    
    int Countnode = 0, i = 0;
    Countnode = Count(*head);
    
    if((ipos < 1) ||(ipos > Countnode))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(head);
    }
    else if(ipos == Countnode)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;
        
        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }
        target = temp -> next;
        temp -> next = target -> next;
        temp -> next -> prev = temp;
        free(target);
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    
    InsertLast(&first, 101);
    InsertLast(&first, 121);
    InsertLast(&first, 151);
    
    Display(first);
    iRet = Count(first);
    printf("Number Of Elements Are : %d\n",iRet);
    
    InsertAtPos(&first, 75, 4);
    
    Display(first);
    iRet = Count(first);
    printf("Number Of Elements Are : %d\n",iRet);
    
    DeleteAtPos(&first, 4);
    
    Display(first);
    iRet = Count(first);
    printf("Number Of Elements Are : %d\n",iRet);
    
    return 0;
}