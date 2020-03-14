/*Devesh Bhogre 
  102061
  FY-BTECH DIV 2 
  Batch B4*/
import java.util.*;

class shape
{
  public double d1,d2;
	 double A1;
	
  shape()
  {
   d1=0;
   d2=0;
   A1=0;
  }
	 
      
       void accept()
      {
      	Scanner console = new Scanner(System.in);
      	System.out.println("D1:");
      	d1= console.nextDouble();
      	System.out.println("D2:");
      	d2= console.nextDouble();      	
      }
      
      void display()
      {
      	System.out.println("Area:"+A1);
      }
}
class tri extends shape
{
   tri()
   {super();}
   void display()
   {
   System.out.println("Enter Dimensons i.e. Height and base of   Triangle:"); 
   super.accept();
   super.A1=(0.5)*super.d1*super.d2;
   super.display();
   }
}
class rect extends shape
{
   rect()
   {super();}
   void display()
   { 
   System.out.println("Enter Dimensons i.e. Length and breath of Rectangle:");
   super.accept();
   super.A1=super.d1*super.d2;
   super.display();
   }
}
class Area
{
 public static void main(String args[])
 {
   shape s1=new shape();
   shape.display();
   rect r1= new rect();
   r1.display();
   tri t1= new tri();
   t1.display(); 
 }
}      

/*Output:
exam@C04L0308:~$ cd Desktop
exam@C04L0308:~/Desktop$ javac Area.java
exam@C04L0308:~/Desktop$ java Area
Area:0.0
Enter Dimensons i.e. Length and breath of Rectangle:
D1:
2
D2:
4
Area:8.0
Enter Dimensons i.e. Height and base of   Triangle:
D1:
4
D2:
3
Area:6.0
*/		
