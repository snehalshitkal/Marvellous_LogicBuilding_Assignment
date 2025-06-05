
/*
Write a program which accept string from user and count spaces.
Input   "sneha l@33 fd js"
Output  3
*/
#include<stdio.h>
#include<ctype.h>
int CountWhite(char *str)
{
    int count=0;
    while(*str!=0)
    {
        if(*str==' ')
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    int iRet = 0;
    char arr[20];
    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);
    iRet = CountWhite(arr);
    printf("Spaces:%d",iRet);
    
    return 0;
}