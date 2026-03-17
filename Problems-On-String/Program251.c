#include<stdio.h>

void Accending(int *ptr, int iSize)
{
    int i = 0, j = 0, temp = 0;
    
    for(i = 0; i < iSize; i++)
    {
        for(j = i + 1; j < iSize; j++)
        {
            if(ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}

int main()
{
    int iValue = 0, i = 0;
    printf("Enter How many Elements : ");
    scanf("%d",&iValue);
    
    int Arr[iValue];
    
    printf("Enter The Elements : \n");
    for(i = 0; i < iValue; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    Accending(Arr, iValue);
    
    printf("Accending Order Is : \n");
    for(i = 0; i < iValue; i++)
    {
        printf("%d\n",Arr[i]);
    }
    
    return 0;
}