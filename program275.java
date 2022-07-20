//  Accept String and reverse word of that string
import java.lang.*;
import java.util.*;

class program275
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();

        String strX = str.replaceAll("\\s+"," ");
        String strXX = strX.trim();             //  white space remove in start and end

        String arr[] = strXX.split(" ");

        StringBuffer finalstr = new StringBuffer();

        for(int i = 0; i < arr.length; i++)
        {
            StringBuffer sb = new StringBuffer(arr[i]);
            finalstr.append((sb.reverse()).append(" "));
        }

        String finalstr2 = new String(finalstr);
        System.out.println(finalstr2.trim());
    
    }
}