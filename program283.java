//  Accept 2 Strings and check whether strings are Anagram or not
//  Input:   listen  silent
//  Output:     Anagram String
//  Using Inbuild Method

import java.lang.*;
import java.util.*;

class program283
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String:");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String:");
        String str2 = sobj.nextLine();

        char arr[] = (str1.toLowerCase()).toCharArray();
        char brr[] = (str2.toLowerCase()).toCharArray();

        Arrays.sort(arr);
        Arrays.sort(brr);

        if(Arrays.equals(arr,brr))
        {
            System.out.println("Strings are Anagram");
        }
        else
        {
            System.out.println("Strings are not Anagram");
        }
  
    }
}