#include<stdio.h>

int main()
{
    int iStandard = 0;
    
    printf("Enter Your Standard : \n");
    scanf("%d",&iStandard);
    
    switch(iStandard)
    {
        case 8:
            printf("Your Exam At 8am \n");
            break;
            
        case 9:
            printf("Your Exam At 9am \n");
            break;
            
        case 10:
            printf("Your Exam At 10am \n");    
            break;
            
        case 11:
            printf("Your Exam At 11am \n");
            break;
            
        default:
            {
                printf("Sorry we don't have information about your Standard \n");
            }        
    }
    
    return 0;
}