#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if((fPercentage >= 0.0f) && (fPercentage <= 100.0f))        // Filter 
    {
        if(fPercentage >= 90.0f)
        {
            printf("Grade A : Excellent \n");
        }
        else if(fPercentage >= 75.0f)
        {
            printf("Grade B : Very Good \n");
        }
        else if(fPercentage >= 60.0f)
        {
            printf("Grade C : Good \n");
        }
        else if(fPercentage >= 40.0f)
        {
            printf("Grade D : Pass \n");
        }
        else
        {
            printf("Fail \n");
        }
    }
    else
    {
        printf("Invalid Percentage. Please Enter the Value in Range 0 To 100 \n");
    }
}

int main()
{
    float fResult = 0.0f;
    
    printf("Please Enter Your Percentage \n");
    scanf("%f",&fResult);
    
    DisplayResult(fResult);
    
    return 0;
}