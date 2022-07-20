import java.lang.*;
import java.util.*;

class program270
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();

        String strX = str.replaceAll("\\s+"," ");

        String arr[] = strX.split(" ");

        System.out.println("Number of words are: " + arr.length);
    }
}