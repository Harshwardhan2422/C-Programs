#include<stdio.h>

int Display(int *ptr)
{
    int iCnt = 0, iSum = 0;
    
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        iSum = iSum + *ptr;
        ptr++;
        
    }
    return iSum;
}
int main()
{
    int Arr[4];
    int iCnt = 0,iRet = 0;
    
    printf("Please Entered the Values : \n");
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    iRet = Display(Arr);
    printf("Addition is : %d\n",iRet);
    
    return 0;
}