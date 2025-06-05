/*
    Accept number of row and number of column from user and display below pattern
    4   4   4   4 
    3   3   3   3
    2   2   2   2
    1   1   1   1
*/

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    char no=0;
    int i = 0,j = 0;
    for(i =1,no=4;i<=iRow;i++,no--)
    {
        for(j = 1;j<=iCol;j++)
        {
            printf("%d\t",no);
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