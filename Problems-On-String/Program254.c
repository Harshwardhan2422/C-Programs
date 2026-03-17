#include<stdio.h>
#include<stdlib.h>

void Descending(int Arr[], int iSize)
{
    int i = 0, j = 0, temp = 0;
    
    for(i = 0; i < iSize; i++)
    {
        for(j = i + 1; j < iSize; j++)
        {
            if(Arr[i] < Arr[j])
            {
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
}

int main()
{
    int iValue = 0, i = 0;
    int *ptr = NULL;
    
    printf("Enter How many Elements : ");
    scanf("%d",&iValue);
    
    // Allocate Dynamic memory 
    ptr = (int *) malloc (iValue * sizeof(int));
    
    printf("Enter The Elements : \n");
    for(i = 0; i < iValue; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    Descending(ptr, iValue);
    
    printf("Descending Order Is : \n");
    for(i = 0; i < iValue; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    // Deallocate Memory 
    free(ptr);

    return 0;
}