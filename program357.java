import java.lang.*;
import java.util.*;
import java.io.*;

class program357
{
    public static void main(String arg[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        
        int iNo = 0;
        double dValue = 0.0;
        String str = "";

        iNo = Integer.parseInt(bobj.readLine());
        dValue = sobj.nextDouble();
        str = bobj.readLine();
        
        System.out.println("String: " + str);
        System.out.println("Double: " + dValue);
        System.out.println("Int: " + iNo);
    }
}