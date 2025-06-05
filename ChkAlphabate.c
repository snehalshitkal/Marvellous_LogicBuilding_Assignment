/*
Accept character from user and check whether it is alphabet or not(A-Z,a-z)
input : F
output: true
*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

BOOL ChkAlpha(char ch)
{
    if((ch>='A-Z')&&(ch<='a-z'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the Character:");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);
    if(bRet ==TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("Not character");
    }

    return 0;
}