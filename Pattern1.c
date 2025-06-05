/*
Accept number of row and number of column from user and display below pattern.
Input   iRow=4   icol=3
output:
        *   *   *
        *   *   *
        *   *   *
        *   *   *
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    for(i =1;i<=iRow;i++)
    {
        for(j = 1;j<=iCol;j++)
        {
            printf("*\t");
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