#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int Brr[], int isize)
{
    int i = 0, j = 0, k = 0;
    int selected = 0;
            
    for(i = 0; i < isize; i++)
    {
        for(j = i - 1, selected = Brr[i]; ((j >= 0) && (Brr[j] > selected)); j--)
        {
            Brr[j + 1] = Brr[j];
        }
        Brr[j + 1] = selected;
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
    
    InsertionSort(ptr,isize);
    
    printf("Values Of Array After Sorting : \n");
    
    for(i = 0; i < isize; i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;
}