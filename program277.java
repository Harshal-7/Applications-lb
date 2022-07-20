//  Accept 2 Strings and check whether strings are Anagram or not
import java.lang.*;
import java.util.*;

class program277
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();
        str = str.toLowerCase();                    // added updater

        char arr[] = str.toCharArray(); 
        int Frequency[] = new int[26];
        int i = 0;
        
        for(i = 0; i < arr.length; i++)
        {
            Frequency[arr[i] - 'a']++;              // same like previous but ascii is not used
        }

        for(i = 0; i < Frequency.length; i++)
        {
            System.out.println(Frequency[i]);
        }

    }
}