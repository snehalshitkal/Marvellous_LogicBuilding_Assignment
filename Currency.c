/* 
Accept amount in US Doller return Value in Indian Currancy
consider    1$  : 70 rupees
Input   :       10
Output  :       700
Complexity :  O(N)

*/

#include<stdio.h>
float DollarToINR(float Dollar)

{
    if (Dollar<0)
    {
        Dollar = -Dollar;    
    }
    int iResult = 0;
    iResult = Dollar * 70;
    return iResult;
    
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter Dollers:");
    scanf("%d",&iValue);
    iRet= DollarToINR(iValue);
    printf("Indian Rupees: %d",iRet);
    return 0;
}


