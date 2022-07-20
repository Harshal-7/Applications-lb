//  Accept String and print largest word

import java.lang.*;
import java.util.*;

class program274
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();

        String strX = str.replaceAll("\\s+"," ");
        String strXX = strX.trim();         //  white space remove in start and end

        String arr[] = strXX.split(" ");

        int iMax = 0;
        int iPos = 0;

        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i].length() > iMax)
            {
                iMax = arr[i].length();
                iPos = i;
            }
        }

        System.out.println("Length of largest word is: " + iMax);
        System.out.println("Largest word is: " + arr[iPos]);
    }
}