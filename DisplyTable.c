/* Accept Number from user and display Table
Input   2
Output  2   4   6   8   10  12  14  16  18  20*/

#include<stdio.h>
void Table(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0,result = 0;
    for (iCnt=1;iCnt<=10;iCnt++)
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