
/*
    Accept N Number from user accept one another number as NO,
    return index of Last occurance of that No.
    Input     :6
    No        :66
    Element   : 85   66     11     66    93    88
    Output : 3
*/
#include<stdio.h>
#include<stdlib.h>

int LastOccur(int Arr[],int iLength,int iNo)
{
    int count = 0,iCnt = 0;
    for(iCnt = 0;iCnt<iLength; iCnt++ )
    {
        if (Arr[iCnt]==iNo)
        {
            return iCnt;
        }
    }
    return -1;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int * p = NULL;

    printf("Enter number of Element:\n");
    scanf("%d",&iSize);

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    p = (int *)malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory:");
        return -1;
    }
     printf("Enter %d elements",iSize);
     for(iCnt = 0; iCnt< iSize;iCnt++)
     {
        printf("Enter Element:%d\t",iCnt+1);
        scanf("%d",&p[iCnt]);
     }

     iRet = LastOccur(p,iSize,iValue);
     if(iRet == -1)
     {
        printf("there is no such number:");
     }
     else
     {
        printf("Last occurance of number %d:",iRet);
     }   
    
     free(p);
     return 0;
}