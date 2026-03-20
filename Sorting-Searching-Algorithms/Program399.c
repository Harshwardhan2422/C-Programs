#include<stdio.h>
#include<stdlib.h>

void BinarySearch(int Brr[], int isize, int iNo)
{
    int istart = 0, imid = 0, iend = isize - 1;
    
    while(istart <= iend)
    {
        imid = istart + (iend - istart) / 2;
        
        if(Brr[imid] == iNo)
        {
            printf("Element is present \n");
            return;
        }
        
        if(iNo > Brr[imid])
        {
            istart = imid + 1;
        }
        else
        {
            iend = imid - 1;
        }
    }
    printf("There is no such element");
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
    
    BinarySearch(ptr,isize,ivalue);
    
    free(ptr);

    return 0;
}