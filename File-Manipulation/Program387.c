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
        printf("Unable to open file\n");
        return -1;
    }
    
    lseek(fd, -10, SEEK_END);
    
    iRet = read(fd, Arr, 5);
    if(iRet == -1)
    {
        printf("Unable to read file\n");
        return -1;
    }
    
    Arr[iRet] = '\0';
    printf("Last 5 Bytes : %s\n",Arr);
    
    close(fd);
    
    return 0;
}