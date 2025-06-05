/*
Accept number of row and number of column from display below pattern.
iRow = 4  iCol = 4
output:
*   *   *   *
*   *   *
*   *
*
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i>=j)
            {
                printf("*\t",i);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter number row and columns:");
    scanf("%d %d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}