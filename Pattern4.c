/*
Accept number of row and number of column from user and display below pattern.
Input   iRow=3   icol=4
output:
        *   #   *   #
        *   #   *   #
        *   #   *   #
        
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    
    int i = 0,j = 0;
    for(i =1;i<=iRow;i++)
    {
        for(j = 1;j<=iCol;j++)
        {
            if(j%2==0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
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