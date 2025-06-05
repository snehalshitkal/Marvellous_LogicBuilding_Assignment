/*
Accept division of student from user & depends on the division .Display exam timing.
There are 4 Division in school A,B,C,D .Exam of division A at 7 AM  B at 8.30AM c at 9.20AM 
D at 10.30 AM.
*/

#include<stdio.h>
#include<stdbool.h>
void DisplaySchedule(char chDiv)
{
    if (chDiv ='A')
    {
        printf("Your Exam at 7AM");
    }
    else if (chDiv ='B')
    {
       printf("Your Exam at 8.30AM"); 
    }
    else if (chDiv ='C')
    {
       printf("Your Exam at 9.20AM"); 
    }
    else(chDiv ='D')
    {
       printf("Your Exam at 10.30AM"); 
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character:");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);
    return 0;
}