//  accept 2 Strings & check 1st string is Rotation of 2nd string       (.contains() method used here)
//  Marvellous
//  llousMarve

import java.lang.*;
import java.util.*;

class program307
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str1 = sobj.nextLine();

        System.out.println("Enter Rotated String");
        String str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {
            System.out.println("Strings are not in Rotation!");
            return;
        }

        String str3 = str1 + str1;

        if(str3.contains(str2))
        {
            System.out.println("Strings are in Rotation");
        }
        else
        {
            System.out.println("Strings are not in Rotation!");
        }

    }
}