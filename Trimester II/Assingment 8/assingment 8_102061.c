#include<stdio.h>

int fact(int a)
{
	if(a==1 || a==0)
	return 1;
	else
	return (a*fact(a-1));
	
}
main()
{
	int b,f;
	printf("Enter the number to find Factorial:");
	scanf("%d",&b);
	f=fact(b);
	printf("The Factorial is: %d\n",f);
}

		 
