
/*
    Accept N Number from user accept Range,Display all Elements from that range.
    Input     : 6
    start     : 66
    End       : 90
    Element   : 85   66     3     76    93    88
    Output    : 66  76  88
*/
#include<stdio.h>
#include<stdlib.h>

int DisplayRange(int Arr[],int iLength,int iStart,int iEnd)
{
    int count = 0,iCnt = 0;
    for(iCnt = 0;iCnt<iLength; iCnt++ )
    {
        if ((iStart<=Arr[iCnt])&&(iEnd>=Arr[iCnt]))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue1 = 0,iValue2=0;
    int * p = NULL;

    printf("Enter number of Element:\n");
    scanf("%d",&iSize);

    printf("Enter the starting point:\n");
    scanf("%d",&iValue1);
    printf("Enter the ending point:\n");
    scanf("%d",&iValue2);

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

     iRet = DisplayRange(p,iSize,iValue1,iValue2);
     free(p);
     return 0;
}