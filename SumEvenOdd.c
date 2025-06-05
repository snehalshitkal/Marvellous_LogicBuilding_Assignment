/*
    Accept N number from user and return difference between Summetion of Even Element and Summetion odd 
    Input: 6
    Element 85  66  3   80  93  88
    Output:53(234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int icnt =0,Evensum = 0,OddSum=0,diff = 0;
    for(icnt =0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]%2 == 0)
        {
            Evensum = Evensum + Arr[icnt];
        }
        else
        {
            OddSum = OddSum + Arr[icnt];

        }
    }
    diff = Evensum - OddSum;
}

int main()
{
    int isize = 0, iRet=0,iCnt = 0;
    int *p=NULL;

    printf("Enter Number of Element:\n");
    scanf("%d",&isize);

    p= (int*) malloc(isize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory:\n");
        return -1;
    }
    printf("Enter number of elements:\n");
    for(iCnt = 0;iCnt<isize;iCnt++)
    {
       
        scanf("%d",&p[iCnt]);
    }
    printf("Number of element we entered:\n");
    for(iCnt = 0;iCnt<isize;iCnt++)
    {
       
        printf("%d\n",p[iCnt]);
    }
    
    iRet = Difference(p,isize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
}