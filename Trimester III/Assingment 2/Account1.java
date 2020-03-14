/*Devesh Bhogre 
  102061
  FY-BTECH DIV 2 
  Batch B4*/
import java.util.*;
class account
{
  private int acc_no;
  String name;
  int amt;
  
  public account()
  { 
   acc_no=1234;
   name="Dev";
   amt=20000;
  }

  public void insert()
  {
  
   System.out.println("Enter your account no.= ");
   Scanner console= new Scanner(System.in);
   acc_no= console.nextInt(); 	
   System.out.println("Enter your Name= ");
   name= console.next();
   System.out.println("Enter your total amount= ");
   amt= console.nextInt();	
  }
  
  public void deposit(int a)
  {	
   Scanner console= new Scanner(System.in);
    amt=amt+a;
  }
  
  public void withdraw(int w)
  {
   if(amt>w)
   {
   amt=amt-w;
   System.out.println("Amount withdrawed "+ w);
   }
   else
    System.out.println("Insfficent balance");
  }
  public void display()
  {
   System.out.println("\n\naccount no.= "+ acc_no); 	
   System.out.println("Name       = "+ name);
   System.out.println("Amount     = "+ amt);	
  }
   	 
  public void ckeck()
  {
   System.out.println("Your current Balance= " + amt);
  }	
}	
class Account1
{	
 public static void main(String args[])
 {
   account a1= new account();
   int w,a;	
   Scanner console= new Scanner(System.in);
   a1.insert();
   System.out.println("Enter amount to be deposited = ");
   a= console.nextInt(); 
   a1.deposit(a);
   System.out.println("Enter amount to withdraw = ");
   w= console.nextInt();
   a1.withdraw(w);
   a1.ckeck();
   a1.display();
  }
} 

/*Output:
Enter your account no.= 
39451
Enter your Name= 
Bhavya
Enter your total amount= 
5000 
Enter amount to be deposited = 
100
Enter amount to withdraw = 
200
Amount withdrawed 20099
Your current Balance= 49099


account no.= 39451
Name       =Bhavya
Amount     = 49099
*/
