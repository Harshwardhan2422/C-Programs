#include<stdio.h>
#include<stdlib.h>

void Ascending(int Arr[], int iSize)
{
    int i = 0, j = 0, temp = 0;
    
    for(i = 0; i < iSize; i++)
    {
        for(j = i + 1; j < iSize; j++)
        {
            if(Arr[i] > Arr[j])
            {
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
}

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
    int iValue = 0, i = 0, ichoice = 0;
    int *ptr = NULL;
    
    printf("Enter How many Elements : ");
    scanf("%d",&iValue);
    
    // Allocate Dynamic memory 
    ptr = (int *) malloc (iValue * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("memory allocation failed");
        return -1;
    }
    
    printf("Enter The Elements : \n");
    for(i = 0; i < iValue; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("\n1.Ascending Order\n2.Descending Order\nEnter Choice : ");
    scanf("%d",&ichoice);
    
    if(ichoice == 1)
    {
        Ascending(ptr, iValue);
    }
    else if(ichoice == 2)
    {
        Descending(ptr, iValue);
    }
    else
    {
        printf("Invalid Choice!\n");
    }
    
    printf("\nSorted Elements : \n");
    for(i = 0; i < iValue; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);
    
    return 0;
}