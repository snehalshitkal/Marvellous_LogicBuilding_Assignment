/*
Accept character from user and check whether it is small case or not(A-Z)
input : F
output: true
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
BOOL ChkSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
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

    bRet = ChkSmall(cValue);
    if(bRet ==TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is Not small case character");
    }

    return 0;
}