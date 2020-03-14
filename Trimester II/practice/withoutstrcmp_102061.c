#include<stdio.h>
#include<string.h>

main()
{
	int i,j,ch,k;
	char a[30],b[30];
	printf("Enter 1st word:");
	scanf("%s",a);
	printf("Enter 2ed word:");
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
			if(b[i]!=a[i])
			{
				ch=0;
				break;
			}
	}
	if(ch==0)
	{  
	  printf("Strings are not equal\n");
	  for(i=0;a[i]='\0'||b[i]!='\0';i++)
	  {
	 	if(a[i]>b[i])
	  	   k=0;
	     else if(a[i]<b[i])
	  	   k=1;;
	  	
	  }
	  if(k==0)
	  	  printf("1st String is greater than Second\n");
	     else
	  	  printf("2nd String is greater than First\n");
	 }
	else
		  printf("Strings are equal\n");
} 
	

		 
