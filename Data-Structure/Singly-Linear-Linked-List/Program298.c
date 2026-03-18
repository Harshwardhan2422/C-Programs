#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *first = NULL;
    
    struct node obj1;
    struct node obj2;
    struct node obj3;
    struct node obj4;
    
    obj1.data = 10; 
    obj2.data = 20;
    obj3.data = 30;
    obj4.data = 40;
    
    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = &obj4;
    obj4.next = NULL;
    
    first = &obj1;
    
    printf("%d\n",first -> data);
    printf("%d\n",first -> next -> data);
    printf("%d\n",first -> next -> next -> data);
    printf("%d\n",first -> next -> next -> next -> data);
    
    return 0;
}