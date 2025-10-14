/*
    Write a function that Segregate even and odd numbers.
    the function should put all even element first
    the function put odd all element second.

    Input : {12,34,45,9,8,90,3 }

    Output: {12,34,8,90,45,9,3}
*/

import java.util.*;
class SegregateOddEven
{

    public void SegregateEvenOdd(int Arr)
    {
        int left = 0;
        int right = Arr.length - 1;

        while (left < right) 
        {
            
            while (left < right && Arr[left] % 2 == 0) 
            {
                left++;
            }

            while (left < right && Arr[right] % 2 != 0) 
            {
                right--;
            }

           
            if (left < right)
             {
                int temp = Arr[left];
                Arr[left] = Arr[right];
                Arr[right] = temp;
                left++;
                right--;
             }
        }

        System.out.println("Array after segregation:");

        for (int num : Arr) 
        {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    
    public static void main(String A[])
    {
        int Arr[] = {12,34,45,9,8,90,3};

        SegregateEvenOdd(Arr);

    }
}