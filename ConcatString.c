
/*
Write a program which accept string from user and Concat string second string after first string .
*/
#include<stdio.h>
#include<string.h>

void StrCopy(char*dest ,char *str )
{
    
    while(*str!='\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest= '\0';   
}

void Concat(char*dest ,char *str )
{
    while(*dest!='\0')
    {
        dest++;
    }
    while(*str!='\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest= '\0';        //terminate copy string
}
int main()
{
    char arr[30]="Marvellous Infosystem\t";
    char brr[30]="Logic Building";
    char res[40];
    StrCopy(res,arr);       //first copy
    Concat(res,brr);        // then concat
    printf("concat string are :\n%s",res);
    return 0;
}


