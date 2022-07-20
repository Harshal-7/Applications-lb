//  accept String & display word that occurs Max number of time
//  Hello World India Hello
//  2 times

import java.lang.*;
import java.util.*;

class program311
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        HashMap<String,Integer> hobj = new HashMap<>();
        int Frequency = 0;

        for(String ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }

        Set<String> setobj = hobj.keySet();

        int iMax = 0;
        String c = " ";
        
        for(String value : setobj)
        {
            if(hobj.get(value) > iMax)
            {
                iMax = hobj.get(value);
                c = value;
            }
            // System.out.println(value + " Occurs " + hobj.get(value) + " times");
        }

            System.out.println(c + " Word Occurs Maximum number of times i.e. -> " + iMax);

    }
}


//  accept string & 1 word AND replace that word with Another Word