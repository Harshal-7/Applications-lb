//  accept String & display char that occurs Max number of time

import java.lang.*;
import java.util.*;

class program310
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        HashMap<Character,Integer> hobj = new HashMap<>();
        int Frequency = 0;

        for(char ch : Arr)
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

        Set<Character> setobj = hobj.keySet();

        int iMax = 0;
        char c = ' ';
        
        for(char value : setobj)
        {
            if(hobj.get(value) > iMax)
            {
                iMax = hobj.get(value);
                c = value;
            }
            // System.out.println(value + " Occurs " + hobj.get(value) + " times");
        }

            System.out.println(c + " Occurs Maximum number of times i.e. -> " + iMax);

    }
}
