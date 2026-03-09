#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage < 0.0f  ||  fPercentage > 100.0f)        // Filter 
    {
        printf("Invalid Percentage. Please Enter the Value in Range 0 To 100");
        return;
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