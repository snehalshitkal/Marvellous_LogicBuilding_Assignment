/*
Accept number of row and number of column from display below pattern.
iRow = 4  iCol = 4
output:
    1   2   3   4
        2   3   4
            3   4
                4
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,no=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1,no=1;j<=iCol;j++,no++)
        {
            if(i<=j)
            {
                printf("%d\t",i);
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