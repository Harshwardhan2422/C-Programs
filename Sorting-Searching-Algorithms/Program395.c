#include<stdio.h>
#include<stdlib.h>

int main()
{
    int isize = 0, i = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Elements : ");
    scanf("%d",&isize);
    
    ptr = (int *) malloc (sizeof(int) * isize);
    
    printf("Enter The Values : \n");
    
    for(i = 0; i < isize; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("Values Of Array Are : \n");
    
    for(i = 0; i < isize; i++)
    {
        printf("%d\t",ptr[i]);
    }

    return 0;
}