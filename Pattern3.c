/*
    Accept number of row and number of column from user and display below pattern
    A   A   A   A 
    B   B   B   B
    C   C   C   C
*/

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    char ch='A';
    int i = 0,j = 0;
    for(i =1,ch='A';i<=iRow;i++,ch++)
    {
        for(j = 1;j<=iCol;j++)
        {
            printf("%c\t",ch);
        }
    printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2=0;
    printf("Enter number of row and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);
    pattern(iValue1,iValue2);
    return 0;
}