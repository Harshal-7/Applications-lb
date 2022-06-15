// Toggle 7th bit of that number & return Modified number

import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToggleBit(int iNo)
    {
        int iMask = 0X00000040;
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;
    }
}

class question3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number: ");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.ToggleBit(iValue);

        System.out.println("Modified Number is : " + iRet);
    }
}