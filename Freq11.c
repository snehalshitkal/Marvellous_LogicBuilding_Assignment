
/*
    Accept N Number from user return frequency 11 in it 
    Input     :6
    Element   : 85   66     11     80    93    88
    Output : 1
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
# define true 1
# define false 0


int frequency(int Arr[],int iLength)
{
    int count = 0,iCnt = 0;
    for(iCnt = 0;iCnt<iLength; iCnt++ )
    {
        if (Arr[iCnt]==11)
        {
            count++;
        }
        
    }
    return count;

}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int * p = NULL;

    printf("Enter number of Element:");
    scanf("%d",&iSize);

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

     iRet = frequency(p,iSize);
        printf("freqquecy of 11 no is presentare :%d",iRet);
     
     free(p);
     return 0;
}