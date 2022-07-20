//  Accept 2 Strings and check whether strings are Anagram or not
//  Input:   listen  silent
//  Output:     Anagram String

import java.lang.*;
import java.util.*;

class program280
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String:");
        String str1 = sobj.nextLine();
        str1 = str1.toLowerCase();

        char arr[] = str1.toCharArray(); 
        int Frequency1[] = new int[26];

        System.out.println("Enter Second String:");
        String str2 = sobj.nextLine();
        str2 = str2.toLowerCase();

        char brr[] = str1.toCharArray(); 
        int Frequency2[] = new int[26];

        if(str1.length() != str2.length())
        {
            System.out.println("Strings are Not Anagram");
            return;
        }

        int i = 0;
        
        for(i = 0; i < arr.length; i++)
        {
            Frequency1[arr[i] - 'a']++;
        }
        
        for(i = 0; i < arr.length; i++)
        {
            Frequency2[brr[i] - 'a']++;
        }

        int iMax = 0;
        int iPos = 0;

        for(i = 0; i < Frequency1.length; i++)
        {
            if(Frequency1[i] != Frequency2[i])
            {
                break;
            }
        }

        if(i == 26)
        {
            System.out.println("Strings are Anagram");
        }
        else
        {
            System.out.println("Strings are Not Anagram");
        }
        
    }
}