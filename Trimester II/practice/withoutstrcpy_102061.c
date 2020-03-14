#include<stdio.h>

main()
{
	int i;
	char a[30],b[30];
	printf("Enter word to copy string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("Copied string=%s\n",b);

} 
	

		 
