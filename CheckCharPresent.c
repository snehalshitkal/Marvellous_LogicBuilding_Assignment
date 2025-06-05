/*
Write a program accept string from user and accept one character.Check whether that 
is present in string or not.
input: Marvellous
        e
output: true
*/
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool ChkChar(char *str,char ch)
{
    
    while(*str!='\0')
    {
        if(*str == ch)
        {
          return TRUE;
        }
        str++;
    }
    return FALSE;

}
int main()
{
    char arr[20];
    char cValue='\0';
    bool bRet = FALSE;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found");

    }
    else
    {
        printf("Character not found:");
    }
    return 0;
}