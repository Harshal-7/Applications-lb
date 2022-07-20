// Input:   Hello
/* Output:

    H
    H   e
    H   e   l
    H   e   l    l
    H   e   l   l   o

*/

import java.lang.*;
import java.util.*;


class program293
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter The String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                System.out.print(Arr[j] + "\t");
            }
            System.out.println();
        }

    }
}