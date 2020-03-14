#include<iostream>
using namespace std;
class shape
{
	public:
		  float a,b,r;	  	
		  void acc()
		  {cin>>a>>b;}	
		  void accs()
		  {cin>>r;}
};
class rect:public shape
{
	public:
		   float area()
		   {return(a*b);}
};
class tri:public shape
{
	public:
		   float area()
		   {return(0.5*a*b);}
};
class cir:public shape
{
	public:
		   float area()
		   {return(r*r*3.14);}
};

int main()
{
	float A;
	rect R;
	tri T;
	cir C;
	while(1)
	{
	cout<<"\nEnter your choice to find area of the following figures:\n";
	cout<<"1.Rectangle\n";
	cout<<"2.Triangle\n";
	cout<<"3.Circle\n";
	cout<<"4.Exit\n";
	cout<<"choice: ";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"\nEnter Length & Breath of the rectangle: ";
			  R.acc();
			  A=R.area();
			  cout<<"Area = "<<A<<endl;
			  break;
		case 2:cout<<"\nEnter Base & Height of the triangle: ";
			  T.acc();
			  A=T.area();
			  cout<<"Area = "<<A<<endl;	
			  break;
		case 3:cout<<"\nEnter Radius of Circle: ";
			  C.accs();
			  A=C.area();
			  cout<<"Area = "<<A<<endl;	
			  break;	
		case 4:return (0);
		default:cout<<"\nWrong input!!!\n\n";
	}
	}
}			 	 	 
