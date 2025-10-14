/*
    Wtite a java program which accept matrix from user and return its transpose matrix. 
    The matrix is formed by transpose of a given interchanging the row and columns of a matrix.
 */


import java.util.*;
class Matrix2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0,j = 0;

        System.out.println("Enter the elements:");
        int num = sobj.nextInt();

        int Arr[][] = new int[num][num];
      
        for(i = 0; i < num; i++)
        {
            for(j = 0;j < num;j++)
            {
                System.out.println("Enter("+(i + 1)+","+(j + 1)+") Element");
                Arr[i][j] = sobj.nextInt();
            }
           
        }

         
        for(i = 0; i < num; i++)
        {
            for(j = 0;j < num;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }

    System.out.println("Transpose Matrix : ");
    int transpose[][] = new int[num][num];
    for(i = 0; i  < num; i++ )
    {
        for(j = 0; j < num; j++)
            { 
                
                transpose[j][i] = Arr[i][j];
               
            }
    }

     for(i = 0; i < num; i++)
        {
            for(j = 0;j < num;j++)
            {
                System.out.print(transpose[i][j]+"\t");
            }
            System.out.println();
        }

    }
}