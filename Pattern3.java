/*
    input : iRow - 6  iCol - 6
    output:

            *   *   *   *   *   *
            *               *   *
            *           *       *
            *       *           *
            *    *              *  
            *   *   *   *   *   *
 */
import java.util.*;

class Pattern
{
    public void pattern(int iRow, int iCol)
    {
        int i  = 0, j = 0;

        for(i =  0; i <= iRow; i++)
        {
            for(j = iRow; j >= 0 ; j--)
            {
                if((i == 0) || (j == 0) || (i == iRow )|| (j == iCol))
                {
                    System.out.print("* \t");
                }
                else if(j == i)
                {
                    System.out.print("* \t");
                }
                else
                {
                    System.out.print(" \t");
                }
                
            }
             System.out.println();
        }
    }
}
class Pattern3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Column");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.pattern(iRow,iCol);
    }
}