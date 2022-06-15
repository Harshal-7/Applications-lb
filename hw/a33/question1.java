// accept 1 Number & count number of ON bits in it

import java.lang.*;
import java.util.*;

class Bitwise
{
    public int CountOne(int iNo)
    {
        int iMask = 0X00000001;
        int Result = 0;
        int Count = 0;

        
        return Count;
    }
}

class question1
{
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise obj = new Bitwise();

        int iRet = obj.CountOne(iValue);
        System.out.println("Count of ON(1) bits is : " + iRet);

    }
}