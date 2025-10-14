/*
       
    * * * * *
     * * * *
      * * *
       * *
        *
      
 */

import java.util.*;
class pattern2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of pattern want: ");
        int num = sobj.nextInt();

        int i = 0,j = 0,k = 0;

        for(i = 0; i < num ; i++)
        {

            for(j = 0; j <= i + 1; j++)
            { 
                System.out.print(" ");
            }

            for(k = 0;k <= (num - i) - 1; k++)
            {
                
                System.out.print("* ");
            }
           

            System.out.println();
        }
         
    }
}