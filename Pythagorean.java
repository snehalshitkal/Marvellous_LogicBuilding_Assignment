/*
    Given an Array of integer, Write a function that return true if there is a triplet(a,b,c)
    that satisfies a2 + b2 = c2;
 */


import java.util.*;
class Pythagorean
{
    public static boolean isTriplet(int Arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            Arr[i] = Arr[i] * Arr[i];
        }
        Arrays.sort(Arr);

        
        for (int i = n - 1; i >= 2; i--)
        {
            int cSquared = Arr[i];
            int left = 0;
            int right = i - 1;

            while (left < right) 
            {
                int sum = Arr[left] + Arr[right];

                if (sum == cSquared) 
                {
                    return true;
                } 
                else if (sum < cSquared) 
                {
                    left++;
                } 
                else 
                {
                    right--;
                }
            }
        }

        return false;

    }
    public static void main(String A[])
    {

        boolean bRet = true;
        int Arr[] = {3,1,4,6,5};

        int size = Arr.length;

        bRet = isTriplet(Arr,size);

        if(bRet == true)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }



    }
}