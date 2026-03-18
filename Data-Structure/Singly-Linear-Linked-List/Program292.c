#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;
    
    printf("Size Of node is : %d\n",sizeof(obj));

    return 0;
}