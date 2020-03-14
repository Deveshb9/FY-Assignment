//Devesh Bhogre 102061 Div 2
#include<iostream>
using namespace std;
class comp
{
	public:
		   int r,i;		
		   comp();
		   comp(int x,int y);
		   void acc();
		   void dis();
		   void add(comp c1,comp c2);
		   void mul(comp c1,comp c2);
		   
};
comp :: comp()
{r=i=0;}
comp :: comp(int x,int y)
{r=x;i=y;}
void comp :: acc()
{
	cout<<"Enter real part & imagnary part of complex no: ";
	cin>>r>>i;
}
void comp :: dis()
{
	cout<<"\nComplex no after operation= "<<r<<"+i"<<i;
}		   
void comp :: add(comp c1,comp c2)
{
	comp c3;
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	c3.dis();
}
void comp :: mul(comp c1,comp c2)
{
	comp c3;
	c3.r=(c1.r*c2.r)-(c1.i*c2.i);
	c3.i=(c1.r*c2.i)+(c1.i*c2.r);
	c3.dis();
}
int main()
{
	int ch;
	comp c1,c2,c4;
	while(1)
	{
	cout<<"\n\nEnter your choice to perform operation\n";
	cout<<"1.Addition\n";
	cout<<"2.Multipication\n";
	cout<<"3.Exit\n";
	cout<<"choice: ";
	cin>>ch;
	if(ch!=3&&ch<3)
	{
	cout<<"\nEnter 2 complex no:\n";
	c1.acc();
	c2.acc();
	}
	switch(ch)
	{
		case 1:c4.add(c1,c2);
			  break;
		case 2:c4.mul(c1,c2);
			  break;
		case 3:return (0);
		default:cout<<"\nWrong input!!!\n\n";
	}
	}
		
		   
}
			 	 	 
