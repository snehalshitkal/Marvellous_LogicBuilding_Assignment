import java.util.*;

class Transpose
{
    public static void main(String A[])
    {
        int iRow, iCol , i = 0,j = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows: ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of Column: ");
        iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println("Enter the Element of Matrix:");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol;j++)
            {
                System.out.println("Element [" +(i+1)+","+(j+1)+ "]");
                Arr[i][j] = sobj.nextInt();
            }
        }

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }

        System.out.println("::: Transpose Matrix:::");

        int Trans[][] = new int[j][i];

        for (i = 0; i < iRow; i++)
         {
            for (j = 0; j < iCol; j++) 
            {
                Trans[j][i] = Arr[i][j];
            }
        }

        for (i = 0; i < iCol; i++)
         {
            for (j = 0; j < iRow; j++) 
            {
                System.out.print(Trans[i][j] + "\t");
            }
            System.out.println();
        }

    }
}