/*
Write appliation which accept file name from user and open that file in read mode
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main()
{
    int fd;
    char Fname[50]={'\0'};

    printf("Enter the name of file that you want to open:");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);

    if(fd==-1)
    {
        printf("Invalid File:\n");
    }
    else
    {
        printf("File is open successfully with fd :%d",fd);
        close(fd);
    }

    return 0;
}