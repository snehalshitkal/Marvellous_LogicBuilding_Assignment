/*

Input : Enter number : 5 
Output: 
            A
          A B A
        A B C B C
      A B C D C B A
    A B C D E D C B A
*/

import java.util.*;
class pattern2
{
    private int num;

    public void setNum(int num)
    {
        this.num = num;
    }
    public int getNum()
    {
        return this.num;
    }

    public void printAnswer()
    {
        /*int i = 0, j = 0;
        char ch = 'A';

        for(i = 0; i < num ; i++)
        {
            for(j = num,ch = 'A'; j >= 0; j--)
            {
                if(j <= i)
                {
                    System.out.print(ch);
                    ch++;
                }
                else
                {
                    System.out.print(" ");
                }
            }

            System.out.println();
        }

            ch = (char) ('A' + i - 2);
            for (int j = i - 1; j >= 1; j--) 
            {
                System.out.print(" " + ch);
                ch--;
            }

            System.out.println();
            
        }
    
*/

        for (int i = 1; i <= num; i++) 
        {
            // 1. Print leading spaces (so the pattern is centered)
            for (int s = 1; s <= num - i; s++) 
            {
                System.out.print("  ");  // two spaces (or adjust to match your spacing)
            }

            // 2. Print increasing A → ... up to character for i
            char ch = 'A';
            for (int j = 1; j <= i; j++) 
            {
                System.out.print(ch);

                if (j < i) 
                {
                    System.out.print(" ");  // space between letters
                }
                ch++;
            }

            // 3. Print decreasing from one step before the peak back to ‘A’
            ch = (char) ('A' + i - 2);
            for (int j = i - 1; j >= 1; j--) 
            {
                System.out.print(" " + ch);
                ch--;
            }

            System.out.println();
        }
    }

    public void inputNum()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int num = sobj.nextInt();
        setNum(num);
    }
}
class Pyramid
{
    public static void main(String A[])
    {
        pattern2 pobj = new pattern2();

        pobj.inputNum();

        pobj.printAnswer();

    }
}