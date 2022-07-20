import java.lang.*;
import java.util.*;

class program269
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();

        String arr[] = str.split(" ");

        System.out.println("Number of words are: " + arr.length);
    }
}