#include<stdio.h>
# define ERR_INVALID -1
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return ERR_INVALID
    }
    int iCnt=0,no=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        no = no + 2;
        printf("%d ",no);
    }   
}
int main()
{
    int iValue = 0;
    printf("Enter Number:");
    scanf("%d\n",&iValue);
    PrintEven(iValue);
    return 0;
}