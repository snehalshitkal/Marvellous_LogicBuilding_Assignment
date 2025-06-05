/*
Accept character from user.If character  is capital display its all capital character from input char til Z.
If it small then display its all reverse order till a.
Input   :   Q
output:     Q R S T U V W X Y Z 
Input   :m
output  :m l k j i h g f e d c b a
*/
#include<stdio.h>
void Display(char ch)
{
    char c;
    if(ch>='A' && ch<='Z')
    {
        printf("character from %c to Z:\n", ch);
        for(c=ch; c<='Z';c++)
        {
            printf("%c ", c);
        }
    }
    else if(ch>='a' && ch<='z')
    {
        for(c = ch; c>='a'; c--)
        {
            printf("%c ", c);
        }
    }
    else
    {
        printf("Invalid character:");
    }
    
}
int main()
{
    char cValue = '\0';
    printf("Enter the character:");
    scanf(" %c", &cValue);

    Display(cValue);
    return 0;
}