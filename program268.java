import java.lang.*;
import java.util.*;

class program268
{
    public static void main(String arg[])
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();

        char arr[] = str.toCharArray();

        for(int i = 0; i < arr.length; i++)
        {
            if((arr[i] >= 'a') && (arr[i] <= 'z'))
            {
                iCnt++;
            }
        }

        System.out.println("Small case letters are: " + iCnt);

    }
}