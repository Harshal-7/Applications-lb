// Input:   79959
/* Output:  3

    7+9+9+5+9   39
    3+9         12
    1+2         3

*/

import java.lang.*;
import java.util.*;


class program299
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter The Number");
        int iNo = sobj.nextInt();
        int iSum = 0;

        while(true)
        {
            while(iNo != 0)
            {
                iSum = iSum + (iNo % 10);
                iNo = iNo / 10;
            }
            iNo = iSum;
            iSum = 0;
            if(iNo < 10)
            {
                break;
            }
        }
        System.out.println(iNo);
    }
}