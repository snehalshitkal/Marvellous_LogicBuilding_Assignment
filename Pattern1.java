/*
    **********
    ****  ****
    ***   ***
    **    **
    *     *
    *     *
    **    **
    ***   ***
    ****  ****
    **********

 */
class Pattern1
{
    public static void main(String A[])
    {
        int n = 5; // Half of total rows

        // Upper half
        for (int i = n; i >= 1; i--) 
        {
            // Left stars
            for (int j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            // Spaces
            int spaceCount = 2 * (n - i);
            for (int j = 1; j <= spaceCount; j++) 
            {
                System.out.print(" ");
            }

            // Right stars
            for (int j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            System.out.println();
        }

        // Lower half
        for (int i = 1; i <= n; i++) 
        {
            // Left stars
            for (int j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            int spaceCount = 2 * (n - i);

            for (int j = 1; j <= spaceCount; j++) 
            {
                System.out.print(" ");
            }

            // Right stars
            for (int j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}