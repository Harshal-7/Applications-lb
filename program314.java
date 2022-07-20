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
}

class program314
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        // System.out.println("Insert RID : ");
        // int RID = sobj.nextInt();
        // System.out.println("Insert Name : ");
        // String Name = sobj.next();
        // System.out.println("Insert Salary : ");
        // int Salary = sobj.nextInt();

        Student obj = new Student("Harshal",1000);
        System.out.println(obj.RID);
        System.out.println(obj.Name);
        System.out.println(obj.Salary);

        Student obj1 = new Student("Rajas",2000);
        System.out.println(obj1.RID);
        System.out.println(obj1.Name);
        System.out.println(obj1.Salary);

        Student obj2 = new Student("Pankaj",3000);
        System.out.println(obj2.RID);
        System.out.println(obj2.Name);
        System.out.println(obj2.Salary);

    }
}