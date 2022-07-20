// Input:   78956
/* Output:

    7   8   9   5   6
    7   8   9   5   6
    7   8   9   5   6
    7   8   9   5   6
    7   8   9   5   6

*/

import java.lang.*;
import java.util.*;


class program297
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter The Number");
        
        // String str = Integer.toString(iNo);
        
        char Arr[] = (Integer.toString(sobj.nextInt())).toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                System.out.print(Arr[j] + "\t");
            }
            System.out.println();
        }

    }
}