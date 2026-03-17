#include<stdio.h>

void ReverseArray(int *ptr)
{
    int iStart = 0, iEnd = 4, temp = 0;
    
    while(iStart < iEnd)
    {
        temp = ptr[iStart];
        ptr[iStart] = ptr[iEnd];
        ptr[iEnd] = temp;
        
        iStart++;
        iEnd--;
    }
}
int main()
{
    int Arr[5];
    int i = 0;
    
    printf("Enter Values : \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    ReverseArray(Arr);
    
    printf("Reverse Array is : \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n",Arr[i]);
    }
    printf("\n");

    return 0;
}