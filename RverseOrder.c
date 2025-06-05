/*
Write a program which accept string from user and display it in reverse order.
input:  "MarvellouS"
output  "SuollevraM"
*/
#include<stdio.h>
#include<string.h>
void Reverse(char *str)
{
    int start = 0;
    int end = strlen(str)-1;
    char temp;

    while(start<end)
    {
        temp = str[start];
        str[start]=str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
   printf("Reverse string:%s",arr);
    return 0;
}