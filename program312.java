//  accept string & 1 word AND replace that word with Another Word
//  india is my country
//  my
//  your

import java.lang.*;
import java.util.*;

class program312
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str1 = sobj.nextLine();

        System.out.println("Enter Word that you want to replace: ");
        String str2 = sobj.nextLine();
        
        System.out.println("Enter Replaced Word: ");
        String str3 = sobj.nextLine();
        

        String Arr[] = str1.split(" ");
        
        int iCnt = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i].equals(str2))
            {
                Arr[i] = str3;
                iCnt = i;           
                break;
            }
        }

        System.out.println("Updated String is : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i] + " ");
        }

    }
}