/*
    input : iRow - 4  iCol - 4
    output:

            1   2   3   4   5
            1   2           5
            1       3       5
            1           4   5
            1   2   3   4   5
 */
import java.util.*;

class Pattern
{
    public void pattern(int iRow, int iCol)
    {
        int i  = 0, j = 0;

        for(i =  1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol ; j++)
            {
                if((j == 1)||(j == iCol)||(i == iRow)||(i == 1))
                {
                    System.out.print(j+"\t");
                }
                
                else if(i == j)
                {
                    System.out.print(j+"\t");
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
class Pattern5
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