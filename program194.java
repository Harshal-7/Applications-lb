// palindrome or not

import java.util.*;

class Digits
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("The Number is : " + this.iNo);
    }

    public boolean ChkPalindrome()
    {
        int iDigit = 0;
        int temp = this.iNo;
        int iRev = 0;

        while(this.iNo != 0)
        {
            iDigit = iNo % 10;

            iRev = (iRev * 10) + iDigit;

            iNo = iNo / 10;  
        }

        if(iRev == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

class program194
{
    public static void main(String arg[])
    {
        Digits obj = new Digits();

        obj.Accept();
        obj.Display();
        boolean bRet = obj.ChkPalindrome();

        if(bRet == true)
        {
            System.out.println("It is a Palindrome Number");
        }
        else
        {
            System.out.println("It is Not a Palindrome Number");
        }        
    }
}