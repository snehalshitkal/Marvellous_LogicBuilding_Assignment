/*
Accept character from user and display its ASCII value in decimal,octal and hexadecimal
input   A
output :Decimal      65
        octal        0101
        hexadeciaml  0X41
*/
#include<stdio.h>
void Display(char ch)
{
    printf("Character %c\n", ch);
    printf("Decimal:%d\n", ch);
    printf("Octal %o\n", ch);
    printf("Hexadecimal %X\n", ch);
    
}
int main()
{
    char cValue = '\0';
    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}