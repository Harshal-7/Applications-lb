// Off 7th bit of that number & return Modified number

import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OffBit(int iNo)
    {
        int iMask = 0X00000040;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == 0)
        {
            iResult = iNo;
            return iResult;
        }
        else
        {
            iResult = iNo ^ iMask;
            return iResult;
        }


    }
}

class question1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number: ");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.OffBit(iValue);

        System.out.println("Modified Number is : " + iRet);
    }
}