#include<stdio.h>

void CountWordSpace(char *ptr)
{
    int i = 0, iWord = 0, iSpace = 0, iSpecial = 0;
    int j = 0;
    
    while(ptr[i] != '\0')
    {
        if((ptr[i] >= 'a') && (ptr[i] <= 'z'))
        {
            ptr[i] = ptr[i] - 32;
        }
        
        if((ptr[i] >= 'A') && (ptr[i] <= 'Z'))
        {
            if(j == 0)
            {
                iWord++;
                j = 1;
            }
        }
        else if(ptr[i] == ' ')
        {
            iSpace++;
            j = 0;
        }
        else
        {
            iSpecial++;
            j = 0;
        }
        i++;
    }
    
    printf("Words : %d\n",iWord);
    printf("Space : %d\n",iSpace);
    printf("Special : %d\n",iSpecial);
}

int main()
{
    char Arr[100];
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountWordSpace(Arr);

    return 0;
}