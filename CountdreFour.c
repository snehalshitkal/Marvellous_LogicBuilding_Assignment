/* 
    Accept number from user and count frequency of 4 in it
*/
#include<stdio.h>
int CountTwo(int no)
{
    int iDigit = 0;
    int count = 0;
    if (no < 0)
    {
        no = no;
    }
    while(no!=0)
    {
        iDigit = no % 10;
        if (iDigit == 4)
        {
            count ++;
        }
        no = no / 10; 
    }
    return count;
    
}
int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);
    printf("%d",bRet);
    return 0;
}