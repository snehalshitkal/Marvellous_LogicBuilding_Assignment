/*
        *
       * *
      * * *
     * * * *
    * * * * *
 */

import java.util.*;
class pattern
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of pattern want: ");
        int num = sobj.nextInt();

        int i = 0,j = 0,k = 0;

        for(i = 0; i <= num ; i++)
        {
            for(j = num; j > i; j--)
            { 
                System.out.print(" ");
            }
            for(k = 1; k <= 2 * i+1;k++)
            {
                
                System.out.print("*");
            }
            System.out.println();
        }
         sobj.close();
    }
}