#include<stdio.h>

int main()
{
    int Arr[4];
    int iCnt = 0, iSum = 0;
    
    printf("please Enter The Values : \n");
        //1         2         3
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);    //4
    }
       //1        2           3 
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        iSum = iSum + Arr[iCnt];    //4
    }
    
    printf("Addition is : %d\n ",iSum);
    
    return 0;
}