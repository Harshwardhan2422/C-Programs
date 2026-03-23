#include<stdio.h>

int main()
{
    int *Arr;
    
    Arr = (int *) malloc (sizeof(int) * 4 * 3);
    
    printf("Size Of Array is : %d\n",sizeof(int) * 4 * 3);
    
    return 0;
}