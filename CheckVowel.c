/*
Write a program which accept string from user and it contain vowels in it or not.
input:  "Marvellous"
output  true
*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool ChkVowel(char *str)
{
    int iCnt = 0;
    while (*str!='\0')
    {
        if(*str =='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

    }
   
}
int main()
{
    char arr[20];
    bool bRet = FALSE;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contain Vowel:");
    }
    else
    {
        printf("there is no Vowel:");
    }
   
    return 0;
}