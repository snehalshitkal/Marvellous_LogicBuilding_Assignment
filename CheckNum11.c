
/*
    Accept N Number from user check whether that number contains 11 in it or not
    Input     :6
    Element   : 85   66     11     80    93    88
    Output : present
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
# define true 1
# define false 0


bool Check(int Arr[],int iLength)
{
    int count = 0,iCnt = 0;
    for(iCnt = 0;iCnt<iLength; iCnt++ )
    {
        if (Arr[iCnt]==11)
        {
            break;
        }
        if(iCnt == iLength)
        {
        return false;
        }
        else
        {
        return true;
        }
    }

}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    bool bRet = false;
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

     iRet = Check(p,iSize);
     if(bRet == true)
     {
        printf("11 is present");
     }
     else
     {
        printf("11 not present");
     }
     free(p);
     return 0;
}