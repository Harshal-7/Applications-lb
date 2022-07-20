import java.lang.*;
import java.util.*;

class program271
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();

        String strX = str.replaceAll("\\s+"," ");
        String strXX = strX.trim();     //  white space remove in start and end

        String arr[] = strXX.split(" ");

        System.out.println("Number of words are: " + arr.length);
    }
}