import java.lang.*;
import java.util.*;

//  0000 0100    0000 0000    0000 0000    0000 0000
//  
//  27

class Bitwise
{
    public int OnBit(int iNo)
    {
        int iMask = 0X04000000;             
        int iResult = 0;

        iResult = iNo | iMask;
        return iResult;
    }
}

class program207
{
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        int iRet = bobj.OnBit(iValue);
        System.out.println("Updated number is : " + iRet);

    }
}