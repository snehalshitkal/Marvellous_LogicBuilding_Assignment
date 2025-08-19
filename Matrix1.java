  /*
Input : iRow = 4  iCol = 4
output: A   B   C   D
        A   B   C   D
        A   B   C   D
        A   B   C   D
*/

import java.util.*;

class pattern
{
  public void Pattern(int No1,int No2)
  {
    int i = 0, j = 0;
    char ch = '\0';
    for(i = 0; i < No1 ; i++)
    {
        for(j = 0,ch = 'A'; j < No2; j++,ch++)
        {
            System.out.print(ch+ "\t");
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

        System.out.println("Enter number of Row");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Column");
        int iCol = sobj.nextInt();

        pattern pobj = new pattern();

        pobj.Pattern(iRow,iCol);

    }
}