/* Accept Number from user and display Reverse of Table
Input   2
Output  20   18   16  14   12  10  8  6  4  2*/

#include<stdio.h>
void Table(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0,result = 0;
    for (iCnt=10;iCnt>=1;iCnt--)
    {
       result =iNo * iCnt; 
       printf("%d  ",result);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}