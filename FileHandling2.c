/*
Write application which accept file name from user and create that file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main()
{

    int fd;
    char Fname[20]={'\0'};

    printf("Enter the name of file that you want to create:");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("File successfully created:");
    }
    return 0;
}