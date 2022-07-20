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

class program315
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        Student obj1 = new Student("Harshal",1000);
        Student obj2 = new Student("Rajas",2000);
        Student obj3 = new Student("Pankaj",3500);
        Student obj4 = new Student("Shubham",4000);
        
        obj1.DisplayData();
        obj2.DisplayData();
        obj3.DisplayData();
        obj4.DisplayData();

    }
}