#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* avgv[])
{
	FILE *f1,*f2;
	char c;
	if(argc!=3)
	{
		printf("\nInsufficent arguments\n");
		exit(0);
	}
	f1=fopen(avgv[1],"r");
	f2=fopen(avgv[2],"w");
	printf("Contents on file are:\n");
	c=fgetc(f1);
	while(c!=EOF)
	{
	  printf("%c",c);
	  fputc(c,f2);
	  c=fgetc(f1);
	 }
	 fclose(f1);
	 fclose(f2);
	 return (0);
}
	
	
		 
