/*
Accept charcter from user and check wheater it is special symbol or not
(! @ # $ % ~ ^)
*/

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#define TRUE 1
# define FALSE 0
bool ChkSpecial(char ch)
{
    if(!isalnum(ch))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    bool bRet=TRUE;
    char cValue = '\0';
    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);
    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");

    }
    return 0;
}