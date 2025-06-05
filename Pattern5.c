/*
    Accept number of row and number of column from user and display below pattern.
    iRow = 4    iCol=4
    1   2   3   4
    2   3   4   5
    3   4   5   6
    4   5   6   7
*/

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    char no=1;
    int i = 0,j = 0;
    for(i =0;i<iRow;i++)
    {
        for(j = 1;j<=iCol;j++,no++)
        {  
            printf("%d\t",i+j);
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