  /*
Input : iRow = 4  iCol = 4
output: A   B   C   D
        a   b   c   d
        A   B   C   D
        a   b   c   d
*/

import java.util.*;

class pattern
{
  public void Pattern(int No1,int No2)
  {
    int i = 0, j = 0;
    char ch1 = '\0',ch2 = '\0';
    for(i = 1; i <= No1 ; i++)
    {
        for(j = 1,ch1 = 'A',ch2 = 'a'; j <= No2; j++,ch1++,ch2++)
        {
          if(i % 2 == 0)
          {
            System.out.print(ch2+ "\t");
          }
          else
          {
            System.out.print(ch1+ "\t");
          }
            
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

        System.out.println("Enter number of Row");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Column");
        int iCol = sobj.nextInt();

        pattern pobj = new pattern();

        pobj.Pattern(iRow,iCol);

    }
}