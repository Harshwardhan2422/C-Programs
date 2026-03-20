#include<stdio.h>
#include<stdlib.h>

void ByDirectionalSearch(int Brr[], int isize, int iNo)
{
    int istart = 0, iend = isize - 1;
    
    while(istart <= iend)
    {
        if((Brr[istart] == iNo) || (Brr[iend] == iNo))
        {
            printf("Element is Present\n");
            return;
        }
        istart++;
        iend--;
    }
    printf("There is no such element\n");
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
    
    ByDirectionalSearch(ptr,isize,ivalue);
    
    free(ptr);

    return 0;
}