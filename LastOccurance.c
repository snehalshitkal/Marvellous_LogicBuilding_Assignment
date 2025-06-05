/*
Write a program accept string from user and accept one character.
Return index of  last occurance of that character.
input: Marvellous
        M
output: 10
*/
#include<stdio.h>
#include<ctype.h>

int LastOccurance(char *str,char ch)
{
    int icnt = 0;
    int lastindex=-1;
    for(icnt = 0; str[icnt]!=0;icnt++)
    {
        if(str[icnt]==ch)
        {
            lastindex = icnt;
        }
    }
    
    return lastindex;

}
int main()
{
    char arr[20];
    char cValue;
    int bRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr)

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = LastOccurance(arr,cValue);

    printf("Last occurance is %d",bRet);
    return 0;
}