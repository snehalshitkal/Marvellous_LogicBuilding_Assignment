/*
    Accept number of row and number of column from user and display below pattern
    A   B   C   D 
    A   B   C   D 
    A   B   C   D 
    A   B   C   D 
*/

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    char ch='A';
    int i = 0,j = 0;
    for(i =1;i<=iRow;i++)
    {
        for(j = 1,ch='A';j<=iCol;j++)
        {
            printf("%c\t",ch++);
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