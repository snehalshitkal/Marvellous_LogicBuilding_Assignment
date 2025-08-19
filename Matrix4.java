  /*
Input : iRow = 4  iCol = 5
output: 4 4 4 4 4
        3 3 3 3 3
        2 2 2 2 2
        1 1 1 1 1
       
*/

import java.util.*;

class pattern
{
  public void Pattern(int No1,int No2)
  {
    int i = 0, j = 0;
    int no = 0;
    for(i = 0,no = 4 ;i < No1; i++,no--)
    {
        for(j = 0; j < No2; j++)
        {
            System.out.print(no+"\t"); 
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

        System.out.println("Enter number of Row");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Column");
        int iCol = sobj.nextInt();

        pattern pobj = new pattern();

        pobj.Pattern(iRow,iCol);

    }
}