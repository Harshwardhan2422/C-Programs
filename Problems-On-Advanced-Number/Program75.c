#include<stdio.h>

int main()
{
    int ilength = 0;
    int *ptr = NULL;
    
    printf("Enter The Elements : \n");
    scanf("%d",&ilength);
    
    ptr = (int * ) malloc (ilength * sizeof(int));
    
    // Logic 
    
    free(ptr);

    return 0;
}