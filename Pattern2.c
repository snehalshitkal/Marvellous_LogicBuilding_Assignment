/*
    Accept number of row and number of column from user and display below pattern
    A   B   C   D 
    a   b   c   d
    A   B   C   D 
    a   b   c   d 
*/

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    char ch1='A',ch2='a';
    int i = 0,j = 0;
    for(i =1;i<=iRow;i++)
    {
        for(j = 1,ch1='A',ch2='a';j<=iCol;j++)
        {
            if (i%2 == 0)
            {
                printf("%c\t",ch2++);
            }
            else
            {
                printf("%c\t",ch1++);
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