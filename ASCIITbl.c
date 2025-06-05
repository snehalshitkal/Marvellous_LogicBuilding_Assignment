/*
Write a program which display ASCII table.
Table contain symbol,decimal,hexadecimal and octal representation of every member from 0 to255
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i=0;
    printf("ASCII TABLE (0-255)\n");
       printf("-----------------------------------------------------------\n");
       printf("|    char  |  Decimal  |   HexaDecimal |   Octal   |\n");
       printf("-------------------------------------------------------------\n");
       for(i= 0;i<=255;i++)
       {
        
        {
            printf("|   %c  |   %3d     |   0x%02X    |   %03o    |\n",   i,  i,  i,  i);
        }
        
       }
    
    return 0;
}