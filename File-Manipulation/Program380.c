#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char Name[30];
    char Arr[50];
    
    printf("Please Enter the file name that you want to open \n");
    scanf(" %[^\n]",Name);
    
    fd = open(Name,O_RDWR);
    
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    
    else
    {
        printf("File Successfully opened with fd : %d \n",fd);
        iRet = read(fd,Arr,5);
        
        if(iRet > 0)
        {
            Arr[iRet] = '\0';
            
            printf("%d Bytes Successfully Read from file\n",iRet);
            printf("Data From file is : %s\n",Arr);
        }
        close(fd);
    }
    
    return 0;
}