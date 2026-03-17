#include<stdio.h>
#include<stdlib.h>

float Avarage(int Arr[], int iSize)
{
    int iCnt = 0,iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum /(float) iSize);
}

int main()
{
    int ilength = 0, iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0f;
    
    printf("Enter Number Of Element : ");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("size must. be Greater than zero ! \n");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("please Enter the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    fRet = Avarage(ptr, ilength);
    printf("Addition is : %f\n",fRet);
    
    free(ptr);
    
    return 0;
}