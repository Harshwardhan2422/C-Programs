#include<stdio.h>
#include<stdlib.h>

void LinearSearch(int Brr[], int isize, int iNo)
{
    int i = 0;
    
    for(i = 0; i < isize; i++)
    {
        if(Brr[i] == iNo)
        {
            printf("Element is Present \n");
            return;
        }    
    }
    printf("There is no Such Element ");
}

int main()
{
    int isize = 0, i = 0, ivalue = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Elements : ");
    scanf("%d",&isize);
    
    ptr = (int *) malloc (sizeof(int) * isize);
    
    printf("Enter The Values : \n");
    
    for(i = 0; i < isize; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("Enter The Element That You Won't To Search : ");
    scanf("%d",&ivalue);
    
    LinearSearch(ptr,isize, ivalue);
    
    free(ptr);

    return 0;
}