/*
    Input : iRow : 4   iCol:3
    Output:     *   *   *
                *   *   *
                *   *   *
                *   *   *    
 */

import java.util.*;

class Pattern
{
    public void PatternPrint(int iRow,int iCol)
    {
        int i = 0, j = 0;
        for(i = 0; i < iRow ; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        } 
    }
}
class Matrix1
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