#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int Brr[], int isize)
{
    int i = 0, j = 0, temp = 0, k = 0;
    
    for(i = 0; i < isize; i++)
    {
        for(j = 0; j < isize - i - 1; j++)
        {
            if(Brr[j] < Brr[j + 1])        
            {
                temp = Brr[j];
                Brr[j] = Brr[j + 1];
                Brr[j + 1] = temp;
            }
        }
        
        printf("Data After Pass %d : ",i + 1);
        
        for(k = 0; k < isize; k++)
        {
            printf("%d ",Brr[k]);
        }
        printf("\n");
    }
}

int main()
{
    int isize = 0, i = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Elements : ");
    scanf("%d",&isize);
    
    ptr = (int *) malloc (sizeof(int) * isize);
    
    printf("Enter The Values : \n");
    
    for(i = 0; i < isize; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    BubbleSort(ptr,isize);
    
    printf("Values Of Array After Sorting : \n");
    
    for(i = 0; i < isize; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);

    return 0;
}