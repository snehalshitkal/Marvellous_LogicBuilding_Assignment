/*
    Wtite a java program which accept matrix from user and  return addition of border
    elements of matrix
 */


import java.util.*;
class Matrix4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0,j = 0;

        System.out.println("Enter the no of row:");
        int row = sobj.nextInt();

        System.out.println("Enter the no of column:");
        int col = sobj.nextInt();

        int Arr[][] = new int[row][col];
      
        for(i = 0; i < row; i++)
        {
            for(j = 0;j < col;j++)
            {
                System.out.println("Enter("+(i + 1)+","+(j + 1)+") Element");
                Arr[i][j] = sobj.nextInt();
            }
           
        }

        for(i = 0; i < row; i++)
        {
            for(j = 0;j < col;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    System.out.println("Addition of All Border Elements:");
    int sum = 0;
    for(i = 0; i  < row; i++ )
    {
        for(j = 0; j < col; j++)
        {    
            if(i == 0 || j == 0 ||i == row -1  || j == col - 1)
            {
                sum  = sum + Arr[i][j]; 
            }  
        }
    }
    System.out.print(sum);
   
    }
}