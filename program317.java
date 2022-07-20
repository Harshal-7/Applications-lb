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

    public void InsertData(String str,int value)
    {
        Student sobj = new Student(str,value);
        lobj.add(sobj);
    }

    public void DisplayAll()
    {
        for(Student sref : lobj)
        {
            sref.DisplayData();
        }

    }

}

class program317
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        DBMS dobj = new DBMS();
        dobj.StartDBMS();

        dobj.InsertData("Harshal",1000);
        dobj.InsertData("Sakshi",2000);
        dobj.InsertData("Sachin",3000);
        dobj.InsertData("Suraj",4000);

        dobj.DisplayAll();

    }
}