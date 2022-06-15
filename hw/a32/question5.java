// Accept 1 number & TOGGLE contents of 1st and last nibble of that number

import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OffBit(int iNo)
    {
        int iMask = 0XF000000F;
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;
    }
}

class question4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number: ");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.OffBit(iValue,iPos);

        System.out.println("Modified Number : " + iRet);
    }
}