/*
Accept N number from user and all such element which are e Even and  dvisible by 5
Input  6
Element:    85  66  3   80  93  88
output :    85  80
*/
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for (iCnt = 0 ;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2==0)&&(Arr[iCnt] % 5 ==0))
        {
            printf("%d",Arr[iCnt]);
        }
    }

}
int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of element:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p ==NULL)
    {
        printf("Unable to allocate Memory:");
        return -1;
    }
    printf("Enter %d element\n",iSize);

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter Element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);
    free(p);

    return 0;
}