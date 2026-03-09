#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage >= 0.0f && fPercentage <= 100.0f)        // Filter 
    {
        if(fPercentage >= 40)
        {
            printf("You Are Pass \n");
        }
        else
        {
            printf("You Are Fail \n");
        }
    }
    else
    {
        printf("Invalid Percentage. Please Enter the Value in Range 1 To 100 \n");
    }
}

int main()
{
    float fResult = 0.0f;
    
    printf("Enter The Percentage \n");
    scanf("%f",&fResult);
    
    DisplayResult(fResult);

    return 0;
}