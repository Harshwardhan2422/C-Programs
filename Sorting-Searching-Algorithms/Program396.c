#include<stdio.h>
#include<stdlib.h>

void Update(int Brr[])
{
    Brr[0]++;
}

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
    
    Update(ptr);
    
    printf("Values Of Array Are : \n");
    
    for(i = 0; i < isize; i++)
    {
        printf("%d\t",ptr[i]);
    }
    
    free(ptr);

    return 0;
}