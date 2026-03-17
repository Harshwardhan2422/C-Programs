#include<stdio.h>

void Display(int ptr[],int iSize)
{
    int iCnt = 0;
    
    printf("Values of Array Are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[0]);
        ptr++;
    }
}

int main()
{
    int Arr[4];
    int iCnt = 0;
    
    printf("Please Entered the Values : \n");
        // 1         //2       //3
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);    //4
    }
    
    Display(Arr,5);
    
    return 0;
}