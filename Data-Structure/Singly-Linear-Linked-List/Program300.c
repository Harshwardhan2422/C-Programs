#include<stdio.h>

struct node 
{
    int data;
    struct node *next;
};

void Demo1(struct node *head)    // call by value 
{

}

void Demo2(struct node **head)    // call by Address
{

}

int main()
{
    struct node *first;
    
    struct node obj1;
    struct node obj2;
    struct node obj3;
    
    obj1.data = 11;
    obj2.data = 21;
    obj3.data = 51;
    
    first = &obj1;
    
    Demo1(first);        // Demo(100)
    Demo2(&first);       // Demo(50)
    
    return 0;
}