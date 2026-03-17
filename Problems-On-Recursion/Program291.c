#include<stdio.h>
#include<stdlib.h>

void DisplayR(int Arr[], int iSize)
{
    static int i = 0;
    
    if(i < iSize)
    {
        printf("%d\n",Arr[i]);
        i++;
        DisplayR(Arr, iSize);
    }
}
int main()
{
    int ilength = 0, i = 0;
    int *ptr = NULL;
    
    printf("Enter The Number : ");
    scanf("%d",&ilength);
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Enter The Elements : \n");
    for(i = 0; i < ilength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    DisplayR(ptr, ilength);
    
    free(ptr);

    return 0;
}