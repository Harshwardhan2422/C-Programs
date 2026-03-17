#include<stdio.h>

void Accept(int Brr[],int iNo)
{
    int iCnt = 0;
    
    printf("Please Entered the Values : \n");
    
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
}

void Display(int Brr[], int iNo)
{
    int iCnt = 0;
    
    printf("Values from Array Are : \n");
    
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%d\n",Brr[iCnt]);
    }
}

int main()
{
    int iSize = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iSize);
    
    int Arr[iSize];
    
    Accept(Arr,iSize);
    Display(Arr,iSize);
    
    return 0;
}