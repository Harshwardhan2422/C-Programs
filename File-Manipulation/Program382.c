#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int iRet = 0, fd = 0;
    char Name[50];
    char Arr[20];
    
    printf("Please Enter the file name that you want to open \n");
    scanf(" %[^\n]",Name);
    
    fd = open(Name, O_RDONLY);
    
    if(fd == -1)
    {
        printf("Unable To open File\n");
        return -1;
    }
    
    iRet = read(fd, Arr, 8);
    
    if(iRet == -1)
    {
        printf("Unable To read file\n");
        return -1;
    }
    
    Arr[iRet] = '\0';
    
    printf("Data From File is : %s\n",Arr);
    close(fd);
    
    return 0;
}