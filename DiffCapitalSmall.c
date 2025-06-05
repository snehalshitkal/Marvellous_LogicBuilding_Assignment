/*
Write a program which accept string from user and count number of small character.
input:  "Marvellous Multi OS"
output  9
*/
#include<stdio.h>
int Difference(char *str)
{
    int Capi = 0,small=0,diff=0;
    while (*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            Capi++;
        }
        else if(*str>='a'&&*str<='z')
        {
            small++;
        }
        else
        {
            printf("Invalid character:");
        } 
        str++;
    }
     diff = (Capi - small);
    return diff ;
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d",iRet);
    return 0;
}