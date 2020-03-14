/*Devesh Bhogre 
  102061
  FY-BTECH DIV 2 
  Batch B4*/
import java.util.*;
import java.io.*;
class book
{
  int price;
  String aut;
  String til;
  
  public book()
  { 
   price=200;
   aut="S Chand";
   til="About me";
  }

  public void insert()
  {
  
   System.out.println("Enter book Author= ");
   Scanner console= new Scanner(System.in);
   aut= console.next(); 	
   System.out.println("Enter book Title= ");
   til= console.next();
   System.out.println("Enter price of the book= ");
   price= console.nextInt();	
  }
  public void display()
  {
   System.out.println("\n\nAuthor  = "+ aut); 	
   System.out.println("Title       = "+ til);
   System.out.println("Price       = "+ price);	
  }	
}
	
class book1
{	
 public static void main(String args[])
 {
   book[] b;
   b=new book[5];
   b[0]=new book();
   b[1]=new book();
   b[2]=new book();
   b[3]=new book();
   b[4]=new book();
   	
   Scanner console= new Scanner(System.in);
   int c,i,n=0;
   for(i=0;i<5;i++)
   {
     System.out.println("Enter detail of "+ (i+1) +" book:");
     b[i].insert();
   } 
   do
   {  
    System.out.println("Enter the book no. to be displayed: ");
    c= console.nextInt();
    for(i=0;i<5;i++)
    {
    if(i+1==c)
    {
      b[i].display();
      System.exit(225);
    }
    }
    System.out.println("Book doesn't exsist!!!");
    n=1;
   }while(n!=1);
 }
} 
/*Output:
exam@C04L0308:~/Desktop$ javac book1.java
exam@C04L0308:~/Desktop$ java book1
Enter detail of 1 book:
Enter book Author= 
Murakami
Enter book Title= 
Norwedigan Wood
Enter price of the book= 
399
Enter detail of 2 book:
Enter book Author= 
Eileen Cook
Enter book Title= 
With Malice
Enter price of the book= 
200
Enter detail of 3 book:
Enter book Author= 
The Alchemy of Desire
Enter book Title= 
Tarun Tejpal
Enter price of the book= 
399
Enter detail of 4 book:
Enter book Author= 
Ken Follett
Enter book Title= 
Fal off Giants
Enter price of the book= 
4000
Enter detail of 5 book:
Enter book Author= 
Fiona Barton
Enter book Title= 
Thye Child
Enter price of the book= 
299
Enter the book no. to be displayed: 
1


Author  = Murakami
Title  = Norwedigian Wood
Price  = 399
*/

