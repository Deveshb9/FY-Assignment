#include<stdio.h>

main()
{
	int i;
	char a[30];
	printf("Enter word to find length:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++);
	printf("length=%d\n",i);

} 
	

		 
