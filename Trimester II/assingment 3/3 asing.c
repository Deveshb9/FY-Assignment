#include<stdio.h>

main()
{
	 int a,b,c;
	 printf("Enter 3 numbers to find greatest of them:\n");
	 scanf("%d%d%d",&a,&b,&c);
	 if(a>b && a>c)
	 	{
	 	printf("%d",a);
	 	}
	 else if(b>a && b>c)
	 	{
	 	printf("%d",b);
	 	}
	 else
	 	{
	 	printf("%d",c);
	 	}
	 
	 printf(" is the greatest of the three\n");
} 
		 
