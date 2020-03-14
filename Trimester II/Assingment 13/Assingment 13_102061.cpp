#include<iostream>
using namespace std;
class cal
{
	public:
		   int a,b;		
		   int add()
		   {
		   	cout<<"Addition = "<<a+b<<endl;
		   }
		   int sub()
		   {
		   	cout<<"Subtraction = "<<a-b<<endl;
		   }
		   int mul()
		   {
		   	cout<<"Multipication = "<<a*b<<endl;
		   }
		   int div()
		   {
		   	cout<<"Division = "<<a/b<<endl;
		   }
};

int main()
{
	cal c;
	int ch;
	while(1)
	{
	cout<<"\nEnter your choice to perform operation\n";
	cout<<"1.Addition\n";
	cout<<"2.Subtraction\n";
	cout<<"3.Multipication\n";
	cout<<"4.Division\n";
	cout<<"5.Exit\n";
	cout<<"choice: ";
	cin>>ch;
	if(ch!=5&&ch<5)
	{
	cout<<"\nEnter 2 numbers: ";
	cin>>c.a>>c.b;
	}
	switch(ch)
	{
		case 1:c.add();
			  break;
		case 2:c.sub();
			  break;
		case 3:c.mul();
			  break;
		case 4:c.div();
			  break;
		case 5:return (0);
		default:cout<<"\nWrong input!!!\n\n";
	}
	}
}
			 	 	 
