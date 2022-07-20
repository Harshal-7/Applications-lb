//  Accept 2 Strings and check whether strings are Anagram or not
import java.lang.*;
import java.util.*;

class program278
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();
        str = str.toLowerCase();

        char arr[] = str.toCharArray(); 
        int Frequency[] = new int[26];
        int i = 0;
        
        for(i = 0; i < arr.length; i++)
        {
            Frequency[arr[i] - 'a']++;
        }

        for(i = 0; i < Frequency.length; i++)
        {
            if(Frequency[i] > 0)
            {
                System.out.println((char)(i + 'a') + " : " + Frequency[i]);
            }
        }

    }
}