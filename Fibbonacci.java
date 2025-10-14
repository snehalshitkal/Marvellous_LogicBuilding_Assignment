/* 
Write a java program which print Fibonacci series
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/ 

import java.util.*;

class Fibbonacci
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of term in fibonacci series:");

        int n = sobj.nextInt();

        int first  = 0,sec = 1;
        int term = 0;

        for(int i = 0;i <= n; i++)
        {
            System.out.print(first+ " ");
            term = first + sec;

            first = sec;
            sec = term;
            
        }

    }
}


