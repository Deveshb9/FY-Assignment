#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
	int l1,l2,l3=0,ch;
	char a[30],b[10],c[30],d[10];
	printf("Enter 1st word:");
	scanf("%s",a);
	strcpy(c,a);
	l1=strlen(a);
	printf("Enter 2ed word:");
	scanf("%s",b);
	strcpy(d,b);
	l2=strlen(b);
	do
	{
	printf("Enter choice to perform operation\n");
	printf("1.Find Length\n");
	printf("2.Copy string\n");
	printf("3.Concatinate String\n");
	printf("4.Check Equalitiy\n");
	printf("5.Exit\n");
	printf("choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("\nLength of string 1:%d\n",l1);
		  printf("Length of string 2:%d\n",l2);
		  printf("Length of concatinated string:%d\n\n",l3);
		  strcpy(a,c);
		  strcpy(b,d);
		  break;
	case 2:strcpy(a,b);
		  printf("\nCopied string is:%s\n\n",a);
		  strcpy(a,c);
		  strcpy(b,d);
		  break;
	case 3:strcat(a,b);
		  l3=strlen(a);
		  printf("\nThe concatination of strings are:%s\n\n",a);
		  strcpy(b,d);
		  strcpy(a,c);
		  break;
	case 4:if(strcmp(a,b)==0)
			printf("\nstrings are equal\n\n");
		  else
			printf("\nstrings are not equal\n\n");
		  strcpy(b,d);
		  strcpy(a,c);
		  break;
	case 5:exit(0);
	default:printf("Worng entry!!\n\n");
	}
  }while(ch!=0);
} 
	

		 
