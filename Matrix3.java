  /*
Input : iRow = 4  iCol = 4
output: A   A   A   A
        B   B   B   B
        C   C   C   C
*/

import java.util.*;

class pattern
{
  public void Pattern(int No1,int No2)
  {
    int i = 0, j = 0;
    char ch = '\0';
    for(i = 1,ch = 'A'; i <= No1 ; i++,ch++)
    {
        for(j = 1; j <= No2; j++)
        {
            System.out.print(ch+ "\t"); 
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

        System.out.println("Enter number of Row");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Column");
        int iCol = sobj.nextInt();

        pattern pobj = new pattern();

        pobj.Pattern(iRow,iCol);

    }
}