#include<stdio.h>
#include<stdbool.h>

bool Count(char *str,char ch)        
{
    bool bFlag = false;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[30];
    char cvalue = '\0';
    bool bRet = false;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    printf("Enter Character : ");
    scanf(" %c",&cvalue);       
    
    bRet = Count(Arr, cvalue);
    
    if(bRet == true)
    {
        printf("Character is present \n");
    }
    else
    {
        printf("Character is Not Present \n");
    }
    
    return 0;
}