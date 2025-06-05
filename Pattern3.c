/*
Accept number of row and number of column from user and display below pattern.
Input   iRow=3   icol=5
output:
        5   4   3   2   1
        5   4   3   2   1
        5   4   3   2   1
       
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int no = 1;
    int i = 0,j = 0;
    for(i =1;i<=iRow;i++)
    {
        for(j = 1,no=5;j<=iCol;j++,no--)
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