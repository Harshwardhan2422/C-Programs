#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Push(PPNODE head,int no)    // InsertFirst()
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    
    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}

int Pop(PPNODE head)        // DeleteFirst()
{

}

void Display(PNODE head)
{

}

int Count(PNODE head)
{

}

int main()
{
    PNODE first = NULL;
    
    Push(&first, 51);
    Push(&first, 21);
    Push(&first, 11);

    return 0;
}