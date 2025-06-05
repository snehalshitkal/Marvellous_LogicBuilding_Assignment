/*
    Accept number of row and number of column from user and display below pattern
    iRow = 5        iCol=5
    a   b   c   d   e
    1   2   3   4   5   
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
*/

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    char no = 1;
    char ch = 'a';
    int i = 1,j = 0;
    for(i =1;i<=iRow;i++)
    {
        for(j = 1,no,ch;j<=iCol;j++)
        {
            if(i%2==0)
            {
                printf("%d\t",no++);
            }
            else
            {
                printf("%c\t",ch++);
            }
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