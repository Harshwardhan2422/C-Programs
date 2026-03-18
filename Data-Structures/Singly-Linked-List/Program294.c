#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;
    struct node *ptr = &obj;
    
    obj.data = 10;
    ptr -> data = 10;
    
    obj.next = NULL;
    ptr -> next = NULL;
    
    printf("Value Of : %d\n",obj.data);
    printf("Value Of : %d\n",ptr -> data);

    return 0;
}