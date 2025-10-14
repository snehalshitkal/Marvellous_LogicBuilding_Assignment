/*
    Write a program which accpet file name from user and count
    number of occurance of that charcters from that file
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>
#include<unistd.h>
#define BUFFER_SIZE 1024

int CountChar(char FName[],char ch)
{
    int fd = 0,iCnt= 0,Count=0,iRet = 0;
    char Buffer[BUFFER_SIZE]={'\0'};

    fd = open(FName,O_RDONLY);

    if(fd ==-1)
    {
        printf("Unable to open file:\n");
    }
    else
    {
        printf("File is Successfully open:  %d\n",fd);

        while((iRet=read(fd,Buffer,BUFFER_SIZE))!=0)
        {
            for(iCnt = 0; iCnt<iRet; iCnt++)
            {
                if(Buffer[iCnt] == ch)
                {
                    Count++;
                }
            }
        } 
        close(fd);
    }
    return Count;
}
int main()
{
    char FileName[30]={'\0'},cValue = '\0';
    int Result = 0;

    printf("Enter the File name:\n");
    scanf("%s",FileName);

    printf("Enter the Character:\n");
    scanf(" %s",&cValue);

    Result = CountChar(FileName,cValue);
    printf("Frequency are:  %d",Result);
    return 0;
}