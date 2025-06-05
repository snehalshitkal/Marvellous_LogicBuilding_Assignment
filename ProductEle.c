
/*
    Accept N Number from user return product of all odd element
    Input     :6
    Element   : 15   66     3     70    10    88
    Output : 45
*/
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int count = 0,iCnt = 0,prod=1;
    for(iCnt = 0;iCnt<iLength; iCnt++ )
    {
        if (Arr[iCnt]%2!=0)
        {
            prod = prod * Arr[iCnt];
        }
        
    }
    return prod;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int * p = NULL;

    printf("Enter number of Element:\n");
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

     iRet = Product(p,iSize);
   
    printf("Product is %d:",iRet);
     
     free(p);
     return 0;
}