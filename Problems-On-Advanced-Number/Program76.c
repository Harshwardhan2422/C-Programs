#include<stdio.h>

int main()
{
    int ilength = 0, iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Elements : \n");
    scanf("%d",&ilength);
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    free(ptr);
    
    return 0;
}