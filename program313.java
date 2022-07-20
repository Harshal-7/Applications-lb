import java.lang.*;
import java.util.*;

class Students
{
    public int RollNo;
    public String Name;
    public String Address;
    public int Marks;

    public Students(int RollNo,String str,String Address,int Marks)
    {
        this.RollNo = RollNo;
        this.Name = Name;
        this.Address = Address;
        this.Marks = Marks;
    }

    public Display()
    {
        
    }

}

class program313
{
    public static void main(String arg[])
    {
        while(true)
        {
            System.out.println("Choose Operation:");
            System.out.println("1 : Insert data");
            System.out.println("2 : Update data");
            System.out.println("3 : Delete data");
            System.out.println("4 : Display table");
            System.out.println("5 : Terminate Application");


            int iChoice = 0;
            Scanner sobj = new Scanner(System.in);
            iChoice = sobj.nextInt();

            switch(iChoice)
            {
                case 1:
                    System.out.println("Insert RollNo :");
                    int rn = sobj.nextInt();

                    System.out.println("Insert Name :");
                    String str = sobj.next();

                    System.out.println("Insert Address :");
                    String add = sobj.next();

                    System.out.println("Insert Marks :");
                    int mark = sobj.nextInt();

                    Students obj = new Students(rn,str,add,mark);
                    
                    System.out.println(obj);              
            }


        }

    }
}