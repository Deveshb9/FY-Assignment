/*Devesh Bhogre 
  102061
  FY-BTECH DIV 2 
  Batch B4*/
import java.util.*;
import java.io.*;
import java.lang.*;

class student
{
	public int prn;
        	int con;
  		String nam;
   student()
   {
   	prn=0;
   	con=12345;
    	nam="Null";
    }
    student(int p,int c,String n)
    {
    	prn=p;
    	con=c;
    	nam=n;
    }
}

class UGstudent extends student
{
	public int roll;
	UGstudent()
	{
	   super();
	   roll=00;
	}
	UGstudent(int p,int c,String n,int r)
	{
	   super(p,c,n);
	   roll=r;
	}
}
    
class classstudent extends UGstudent
{
      public String clas;
 	      String branch;
 	      int div;      	
      classstudent()		
      {
      	super();
      	clas="FY";
      	branch="Mech";
      	div=1;
      }
      classstudent(int p,int c,String n,int r,String cl,String b, int d)
      {
      	super(p,c,n,r);
      	clas=cl;
      	branch=b;
      	div=d;
      }
      public void insert()
      {
      	Scanner console = new Scanner(System.in);
      	System.out.println("Enter your details:");
      	System.out.println("PRN:");
      	prn= console.nextInt();
      	System.out.println("Contact:");
      	con= console.nextInt();
      	System.out.println("Name:");
      	nam= console.next();
      	System.out.println("Class:");
      	clas= console.next();
      	System.out.println("Branch:");
      	branch= console.next();
      	System.out.println("Divison:");
      	div= console.nextInt();
      }
      public void display()
      {
       System.out.println("Your details are:");
      	System.out.println("PRN    :"+prn);
      	System.out.println("Contact:"+con);
      	System.out.println("Name   :"+nam);
      	System.out.println("Class  :"+clas);
      	System.out.println("Branch :"+branch);
      	System.out.println("Divison:"+div);
      }
}

class mit
{
  public static void main(String args[])
 {
   classstudent S1= new classstudent();
   S1.insert();
   S1.display();
 }
}

/*Output:
exam@C04L0308:~/Desktop$ javac mit.java
exam@C04L0308:~/Desktop$ java mit
Enter your details:
PRN:
102061
Contact:
52390
Name:
Devesh
Class:
FY-BTECH
Branch:
Computer
Divison:
2
Your details are:
PRN    :102061
Contact:52390
Name   :Devesh
Class  :FY-BTECH
Branch :Computer
Divison:2
*/


  
      	
