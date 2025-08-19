/*
    Input : iRow : 3   iCol:5
    Output:    5    4   3   2   1
               5    4   3   2   1
               5    4   3   2   1
 */

import java.util.*;

class Pattern
{
    public void PatternPrint(int iRow,int iCol)
    {
        int i = 0, j = 0;
        for(i = 0; i < iRow ; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        } 
    }
}
class Matrix3
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