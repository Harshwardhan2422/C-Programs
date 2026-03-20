#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int Brr[], int isize)
{
    int i = 0, j = 0, min_index = 0, temp = 0;
    
    for(i = 0; i < isize - 1; i++)
    {
        min_index = i;
        
        for(j = i + 1; j < isize; j++)
        {
            if(Brr[min_index] > Brr[j])
            {
                min_index = j;
            }
        }
        temp = Brr[i];
        Brr[i] = Brr[min_index];
        Brr[min_index] = temp;
    }
}

int main()
{
    int isize = 0, i = 0;
    int *ptr = NULL;
    
    printf("Enter The Size of Array : ");
    scanf("%d",&isize);
    
    ptr = (int *) malloc (sizeof(int) * isize);
    
    printf("Enter The Values : \n");
    
    for(i = 0; i < isize; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    SelectionSort(ptr,isize);
    
    printf("Values Of Array After Sorting : \n");
    
    for(i = 0; i < isize; i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;
}