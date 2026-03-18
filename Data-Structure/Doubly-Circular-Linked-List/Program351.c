#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
    
    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn -> next = *head;
        (*head) -> prev = newn;
        *head = newn;
    }
    (*tail) -> next = *head;
    (*head) -> prev = *tail;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
    
    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail) -> next = newn;
        newn -> prev = *tail;
        *tail = newn;
    }
    (*tail) -> next = *head;
    (*head) -> prev = *tail;
}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    
    else
    {
        *head = (*head) -> next;
        free((*tail) -> next);
        (*tail) -> next = *head;
        (*head) -> prev = *tail;
    }
}

void DeleteLast(PPNODE head, PPNODE tail)
{
    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    
    else
    {
        *tail = (*tail) -> prev;
        free((*tail) -> next);
        (*tail) -> next = *head;
        (*head) -> prev = *tail;
    }
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{
    int Countnode = 0, i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    
    Countnode = Count(*head,*tail);
    
    if((ipos < 1) || (ipos > Countnode + 1))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(head,tail,no);
    }
    else if(ipos == Countnode + 1)
    {
        InsertLast(head,tail,no);
    }
    else
    {
        newn = (PNODE) malloc (sizeof(NODE));
        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;
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

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{
    int Countnode = 0, i = 0;
    PNODE temp = NULL;
    // Without target pointer 
    
    Countnode = Count(*head,*tail);
    
    if((ipos < 1) || (ipos > Countnode))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(head,tail);
    }
    else if(ipos == Countnode)
    {
        DeleteLast(head,tail);
    }
    else
    {
        temp = *head;
        
        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev = temp;
    }
}

void Display(PNODE head, PNODE tail)
{
    if((head == NULL) && (tail == NULL))
    {
        printf("Linklist is Empty\n");
        return;
    }
    
    printf("Elements of Linklist Are : \n");
    
    do
    {
        printf("|%d| ",head -> data);
        head = head -> next;
    }while(head != tail -> next);
    printf("\n");
}

int Count(PNODE head, PNODE tail)
{
    int iCount = 0;
    
    if((head == NULL) && (tail == NULL))
    {
        printf("Linklist is Empty\n");
        return 0;
    }
    
    do
    {
        iCount++;
        head = head -> next;
    }while(head != tail -> next);
    return iCount;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;
    
    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);
    
    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);
    
    Display(first,last);
    iRet = Count(first,last);
    printf("Number Of Elements Are : %d\n\n",iRet);
    
    InsertAtPos(&first,&last,75,4);
    
    Display(first,last);
    iRet = Count(first,last);
    printf("Number Of Elements Are : %d\n\n",iRet);
    
    DeleteAtPos(&first,&last,4);
    
    Display(first,last);
    iRet = Count(first,last);
    printf("Number Of Elements Are : %d\n\n",iRet);
    
    return 0;
}