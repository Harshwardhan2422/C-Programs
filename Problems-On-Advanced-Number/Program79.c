#include<stdio.h>

void ______(int Arr[],int iSize)
{
        // Logic 
}

int main()
{
    int ilength = 0, iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter Number of Element : \n");
    scanf("%d",&ilength);
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    ________(ptr, ilength);
    
    free(ptr);
    
    return 0;
}