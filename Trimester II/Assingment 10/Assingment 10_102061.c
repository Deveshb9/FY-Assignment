#include<stdio.h>

void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z; 
}
main()
{
	int x,y;
	printf("Enter 2 numbers to swap b/w them:");
	scanf("%d%d",&x,&y);
	printf("Numbers before swap:\n");
	printf("a=%d\nb=%d\n",x,y);
	swap(&x,&y);
	printf("Numbers after swap:\n");
	printf("a=%d\nb=%d\n",x,y);
	
}
	
	
		 
