/*
Accept N number from user and return smallest number
input   6
element 85  66  3   66  98  77
output  98
*/
#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iLength)
{
    int iCnt=0,large = 0;
    int max= 0;
    min = Arr[0];
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<max)
        {
            min = Arr[iCnt];
        }
    }
    return min;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt=0,iValue = 0;
    int *p = NULL;
    printf("Enter number of Element:");
    scanf("%d",&iSize);

    p = (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to  allocate memory");
        return -1;
    }
        printf("Enter %d Element",iSize);
    for (iCnt = 0;iCnt<iSize;iCnt++)
    {
         printf("Enter Element:%d\t",iCnt+1);
         scanf("%d",&p[iCnt]);
    }
    iRet = Minimum(p,iSize);
    printf("Smallest Number is %d",iRet);
    free(p);
    return 0;
}