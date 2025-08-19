/*
    Input : iRow : 3   iCol:5
    Output:     1   1   1   1
                2   2   2   2
                3   3   3   3
                4   4   4   4        
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
                    System.out.print(i+" \t");
                 
            }
            System.out.println();
        } 
    }
}
class Matrix5
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