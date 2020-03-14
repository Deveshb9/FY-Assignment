#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *f1,*f2;
	char n1[20],n2[20],c;
	printf("Enter name of first file:\n");
	scanf("%s",n1);
	f1=fopen(n1,"r");
	if(f1==NULL)
	{
		printf("File Doesn't Exist\n");
		exit(0);
	}
	printf("Enter name of second file in which you will copy text:\n");
	scanf("%s",n2);
	f2=fopen(n2,"w");
	c=fgetc(f1);
	while(c!=EOF)
	{
	  printf("%c",c);
	  fputc(c,f2);
	  c=fgetc(f1);
	}
	fclose(f1);
	fclose(f2);	
}
	
	
		 
