/*
Accept character from user and check whether it is digit or not(A-Z)
input : F
output: true
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
BOOL ChkDigit(char ch)
{
 if((ch >= '0') && (ch <= '9'))
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

    bRet = ChkDigit(cValue);
    if(bRet ==TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is Not Digit");
    }

    return 0;
}