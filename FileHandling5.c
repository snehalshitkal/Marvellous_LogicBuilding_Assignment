/*
    Write a program which is accept file name from user and one count from user 
    and read that number of character from starting position.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

void DisplayPosChar(char fname[] , int pos)
{
    int fd = 0,iRet = 0,icnt = 0;
    char *Buffer = NULL;

    fd = open(fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file");
    }
   
    Buffer = (char *)malloc(pos);
    iRet = read(fd,Buffer,pos);
    if(iRet == -1)
    {
        printf("Unable to read file");
    }
    else
    {
        Buffer[iRet]='\0';
        printf("First %d characters from the file:\n", pos);
        printf("%s",Buffer);
    }
    
}
int main()
{
    char FileName[30]={'\0'};
    int iValue = 0;

    printf("Enter the name of File:\n");
    scanf("%s",FileName);

    printf("Enter the number of character:\n");
    scanf("%d",&iValue);

    DisplayPosChar(FileName,iValue);
    return 0;
}