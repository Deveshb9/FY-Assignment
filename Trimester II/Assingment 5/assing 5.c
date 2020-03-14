#include<stdio.h>

main()
{
	 int i,n,f2,f0=0,f1=1;
	 printf("Enter the number of terms you want to print:");
	 scanf("%d",&n);
	 printf("The Fibonacci series is :\n");
	 printf("%d %d",f0,f1);	 
	 for(i=0;i<n;i++)
	 {
	 	f2=f0+f1;
	 	f0=f1;
	 	f1=f2;
	 	printf(" %d",f2);
	 }
	 printf("\n");
	 
} 
		 
