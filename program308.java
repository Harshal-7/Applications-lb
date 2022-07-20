//  accept String & display frequency of each character (using Hashmap)

import java.lang.*;
import java.util.*;

class program308
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

        System.out.println(hobj);

    }
}

/*
    String->    Hello&&

    key(char)   |   Value(int)
----------------|---------------
        H       |       1
        e       |       1
        l       |       1-> 2
        o       |       1
        &       |       1-> 2

*/