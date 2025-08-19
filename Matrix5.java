  /*
Input : iRow = 4  iCol = 5
output: 1   2   3   4
        5   6   7   8
        9   10  11  12
       
*/

import java.util.*;

class pattern
{
  public void Pattern(int No1,int No2)
  {
    int i = 0, j = 0;
    int no = 0;
    for(i = 0,no = 1;i < No1; i++)
    {
        for(j = 0; j < No2; j++)
        {
            System.out.print(no+"\t"); 
            no++;
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

        System.out.println("Enter number of Row");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Column");
        int iCol = sobj.nextInt();

        pattern pobj = new pattern();

        pobj.Pattern(iRow,iCol);

    }
}