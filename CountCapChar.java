/*

    Input : b   N   j   B   R   b   A   d   G   G
    output: 6
 */


class CountCapChar
{
    public static void main(String A[])
    {
        int i = 0, iCount = 0;
        char Arr[] = {'b','N','j','B','R','b','A','d','G','G'};

        for(i = 0;i < Arr.length ;i++)
        {
            if((Arr[i] > 'A') && (Arr[i] < 'Z'))
            {
                iCount++;
            }
        }
        System.out.println("Number of Capital character: "+iCount);

        

    }
}