/*
    Accept number of row and number of column from user and display below pattern
    1   2   3   4
   -1  -2  -3  -4
    1   2   3   4
   -1  -2  -3  -4
*/

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    char no=1;
    int i = 1,j = 0;
    for(i =1;i<=iRow;i++)
    {
        for(j = 1;j<=iCol;j++,no++)
        {
            if(i%2==0)
            {
                printf("%d\t",-j);
            }
            else
            {
                printf("%d\t",j);
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