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

}

void DeleteLast(PPNODE head, PPNODE tail)
{

}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{

}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{

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

int Count(PPNODE head, PNODE tail)
{
    return 0;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    
    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);
    
    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);
    
    Display(first,last);
    
    return 0;
}