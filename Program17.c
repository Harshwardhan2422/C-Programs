#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage < 0.0f)        // Filter 
    {
        printf("Invalid Percentage. Please Enter Value in Range 0 To 100");
    }
    
    if(fPercentage > 100.0f)        // Filter 
    {
        printf("Invalid Percentage. Please Enter Value in Range 0 To 100");
    }
    
    if(fPercentage >= 40.0f)
    {
        printf("You Are Pass \n");
    }
    else
    {
        printf("You Are Fail \n");
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