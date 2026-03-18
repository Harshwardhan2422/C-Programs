#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Demo1(struct node *head)    // call by value
{

}

void Demo2(struct node **head)    // call by Address
{

}

int main()
{
    struct node *first;

    return 0;
}

