//  Accept String and print largest word

import java.lang.*;
import java.util.*;

class program272
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();

        String strX = str.replaceAll("\\s+"," ");
        String strXX = strX.trim();     //  white space remove in start and end

        String arr[] = strXX.split(" ");

        for(int i = 0; i < arr.length; i++)
        {
            System.out.println(arr[i]);
        }

    }
}