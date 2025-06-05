/*  Write a program to find factorial of given number 
Input       5
Output      120
*/

#include<stdio.h>
int Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, fact = 1;
    for (iCnt = 1;iNo>=iCnt;iCnt++)
    {
        fact = fact * iCnt;
    }
    return fact;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of Number:%d",iRet); 
    return 0;
}