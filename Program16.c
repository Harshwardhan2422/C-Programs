#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage >= 40.00f)
    {
        printf("You Are Pass \n");
    }
    else
    {
        printf("You Are Fail");
    }
}

int main()
{
    float fValue = 0.0f;
    
    printf("Enter The Percentage : \n");
    scanf("%f",&fValue);
    
    DisplayResult(fValue);
    
    return 0;
}