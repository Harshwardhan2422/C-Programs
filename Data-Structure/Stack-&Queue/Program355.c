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
    int iNo = -1;
    
    if(*head == NULL)
    {
        printf("Stack is Empty \n");
        return -1;
    }
    
    else if((*head) -> next == NULL)
    {
        iNo = (*head) -> data;
        free(*head);
        *head = NULL;
    }
    
    else
    {
        PNODE temp = NULL;
        iNo = (*head) -> data;
        temp = *head;
        *head = (*head) -> next;
        free(temp);
    }
    return iNo;
}

void Display(PNODE head)
{
    printf("Elements of Stack Are : \n");
    
    while(head != NULL)
    {
        printf("|%d|\n",head -> data);
        head = head -> next;
    }
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

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    
    Push(&first, 51);
    Push(&first, 21);
    Push(&first, 11);
    
    Display(first);
    iRet = Count(first);
    printf("Number Of Elements Are : %d\n\n",iRet);
    
    iRet = Pop(&first);
    printf("Pop Element is : %d\n",iRet);
    
    Display(first);
    iRet = Count(first);
    printf("Number Of Elements Are : %d\n\n",iRet);
    
    iRet = Pop(&first);
    printf("Pop Element is : %d\n",iRet);
    
    Display(first);
    iRet = Count(first);
    printf("Number Of Elements Are : %d\n\n",iRet);
    
    iRet = Pop(&first);
    printf("Pop Element is : %d\n",iRet);
    
    Display(first);
    iRet = Count(first);
    printf("Number Of Elements Are : %d\n\n",iRet);
    
    return 0;
}