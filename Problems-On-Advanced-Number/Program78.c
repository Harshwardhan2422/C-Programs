#include<stdio.h>

void DisplayResult(int Arr[],int iSize)
{
    int iCnt = 0;
    
    printf("Elements of Array Are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int ilength = 0, iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter Number of Element : \n");
    scanf("%d",&ilength);
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    DisplayResult(ptr,ilength);
    
    free(ptr);
    
    return 0;
}