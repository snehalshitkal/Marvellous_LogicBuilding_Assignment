#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
# define FALSE 0


bool ChkVowel(char ch)
{
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char cValue ='0';
    bool bRet=FALSE;
    
    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);
    if(bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}