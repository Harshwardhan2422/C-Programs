#include<stdio.h>

int main()
{
    int ilength = 0, iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter The Number of Elements : \n");
    scanf("%d",&ilength);
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Entered the Elements : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements of Array Are : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    free(ptr);
    
    return 0;
}