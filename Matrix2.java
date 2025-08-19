/*
    Input : iRow : 4   iCol:3
    Output:     1   2   3 
                1   2   3 
                1   2   3 
                1   2   3   
 */

import java.util.*;

class Pattern
{
    public void PatternPrint(int iRow,int iCol)
    {
        int i = 0, j = 0,no = 0;
        for(i = 0; i < iRow ; i++)
        {
            for(j = 0,no = 1; j < iCol; j++,no++)
            {
                System.out.print(no+"\t");
            }
            System.out.println();
        } 
    }
}
class Matrix2
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