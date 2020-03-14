#include<stdio.h>
#include<string.h>

main()
{
	int i,j,ch,h=0;
	char a[30],b[30];
	printf("Enter word to find whether the word is palandrome or not:");
	scanf("%s",a);
	for(h=0;a[h]!='\0';h++);
	for(i=0,j=h-1;a[i]!='\0';j--,i++)
	{
			if(a[j]!=a[i])
			{
				ch=0;
			}
	}
	if(ch==0)
	  printf("String is not Palandrome\n");
	else
	  printf("String is Palandrome\n");	

} 
	

		 
