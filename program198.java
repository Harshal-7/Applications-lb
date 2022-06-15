// check number is Perfect or not

import java.util.*;

class Numbers
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        
        this.iNo = sobj.nextInt();
    }
    
    public void Display()
    {
        System.out.println("The Number is : " + this.iNo);
    }

    public boolean ChkPrime()
    {
        int iCnt = 0;
        boolean bRet = true;

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                break;
            }
        }

        if(iCnt == (iNo/2) + 1)
        {
            return true;
        }    
        else
        {
            return false;
        }
    }

}

class program198
{
    public static void main(String arg[])
    {
        Numbers obj = new Numbers();

        obj.Accept();
        obj.Display();
        boolean bRet = obj.ChkPrime();

        if(bRet == true)
        {
            System.out.println("It is a Prime Number");
        }
        else
        {
            System.out.println("It is Not a Prime Number");
        }
    }
}