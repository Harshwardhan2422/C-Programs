#include<stdio.h>

int main()
{
    char Name[30];
    
    printf("Enter Your Name : \n");
    scanf("%s",Name);        // Accept till first space only
    
    printf("Your Name is : %s\n", Name);
    
    return 0;
}