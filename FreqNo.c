
/*
    Accept N Number from user accept one another number as NO,return frequency of NO  from it
    Input     :6
    No        :66
    Element   : 85   66     11     66    93    88
    Output : 2
*/
#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[],int iLength,int iNo)
{
    int count = 0,iCnt = 0;
    for(iCnt = 0;iCnt<iLength; iCnt++ )
    {
        if (Arr[iCnt]==iNo)
        {
            count++;
        }
        
    }
    return count;

}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int * p = NULL;

    printf("Enter number of Element:");
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

     iRet = frequency(p,iSize,iValue);
        printf("freqquecy of number:%d",iRet);
     
     free(p);
     return 0;
}