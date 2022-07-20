// Input:   Hello
/* Output:

    H	
    H	E	
    H	E	L	
    H	E	L	L	
    H	E	L	L	O	
    H	E	L	L	
    H	E	L	
    H	E	
    H	

*/

import java.lang.*;
import java.util.*;


class program295
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter The String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int i = 0;
        int j = 0;

        for(i = 0; i < (Arr.length-1); i++)
        {
            for(j = 0; j <= i; j++)
            {
                System.out.print(Arr[j] + "\t");
            }
            System.out.println();
        }
        for(i = (Arr.length-1); i >= 0; i--)
        {
            for(j = 0; j <= i; j++)
            {
                System.out.print(Arr[j] + "\t");
            }
            System.out.println();
        }

    }
}