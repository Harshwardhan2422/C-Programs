#include<stdio.h>

void Display(int ptr[])
{
    printf("Values of the Array Are : \n");
    printf("%d\t",ptr[0]);        // *(ptr + 0)
    printf("%d\t",ptr[1]);        // *(ptr + 1)
    printf("%d\t",ptr[2]);        // *(ptr + 2)
    printf("%d\t",ptr[3]);        // *(ptr + 3)
}

int main()
{
    int Arr[4];
    int iCnt = 0;
    
    printf("Please Entered the Values : \n");
        // 1         //2       //3
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);    //4
    }
    
    Display(Arr);
    
    return 0;
}