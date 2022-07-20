//  DBMS Project

import java.lang.*;
import java.util.*;

//  create table student(RID int, Name varchar(255), Salary int)
//  Database Schema/table
class Student
{
    public int RID;
    public String Name;
    public int Salary;

    private static int Generator;
    
    static
    {
        Generator = 0;
    }

    public Student( String str,int value)
    {
        this.RID = ++Generator;
        this.Name = str;
        this.Salary = value;
    }

    public void DisplayData()
    {
        System.out.println("| " + this.RID + "   | " + this.Name + "\t | " + this.Salary + "\t |");
    }

}

class DBMS
{
    public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList<>();
    }



    public void StartDBMS()
    {
        System.out.println("Customized DBMS started successfully....");
 
 
    }
}

class program316
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        DBMS dobj = new DBMS();
        dobj.StartDBMS();

    }
}