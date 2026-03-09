#include<stdio.h>

int main()
{
    float fValue = 0.0f;
    
    printf("Enter The Percentage : \n");
    scanf("%f",&fValue);
    
    if(fValue >= 40.00f)
    {
        printf("You Are Pass \n");
    }
    else
    {
        printf("Your Area Fail \n");
    }
    
    return 0;
}