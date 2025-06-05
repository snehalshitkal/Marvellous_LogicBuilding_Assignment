/*
    Accept number of row and number of column from user and display below pattern
    2   4   6   8   10
    1   3   5   7   9
    2   4   6   8   10
    1   3   5   7   9
*/

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    char no=0;
    int i = 1,j = 0;
    for(i =1;i<=iRow;i++)
    {
        if(i%2==0)
            {
                 
                 no=2;
            }
            else
            {
                 
                 no=1;
            }
        for(j = 1;j<=iCol;j++)
    
            printf("%d",no);
            no=no+2;
            
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