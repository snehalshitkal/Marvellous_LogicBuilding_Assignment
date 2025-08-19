/*
    Input : iRow : 3   iCol:5
    Output:    *    #   *   #
               *    #   *   #
               *    #   *   #
 */

import java.util.*;

class Pattern
{
    public void PatternPrint(int iRow,int iCol)
    {
        int i = 0, j = 0;
        for(i = 1; i <= iRow ; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j % 2 == 0)
                {
                    System.out.print("# \t");
                }
                else
                {
                    System.out.print("* \t");
                }
                
            }
            System.out.println();
        } 
    }
}
class Matrix4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Row");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Column");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.PatternPrint(iRow,iCol);
    }
}