/*
Accept character from user and check whether it is Capital or not(A-Z)
input : F
output: true
*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
BOOL chkCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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

    bRet = chkCapital(cValue);
    if(bRet ==TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is Not Capital character");
    }

    return 0;
}