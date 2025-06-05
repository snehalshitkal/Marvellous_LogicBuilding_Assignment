
/*
    Accept N Number from user accept one another number as NO,
    check whether No is present or not.
    Input     :6
    No        :66
    Element   : 85   66     11     66    93    88
    Output : TRUE
*/
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0


bool Check(int Arr[],int iLength,int iNo)
{
    int count = 0,iCnt = 0;
    for(iCnt = 0;iCnt<iLength; iCnt++ )
    {
        if (Arr[iCnt]==iNo)
        {
            break;
        }
        if(iCnt == iLength)
        {
        return FALSE;
        }
        else
        {
        return TRUE;
        }   
    }
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

     iRet = Check(p,iSize,iValue);
     if(iRet == TRUE)
     {
        printf("number is present:");
     }
     else
     {
        printf("number not present:");
     }   
    
     free(p);
     return 0;
}