#include<stdio.h>

struct Student
{
	int roll;
	char name[20];
	char clas[10];
	float per;
}S;

main()
{
	printf("Enter Details of Students:\n");
	printf("Name      : ");
	scanf("%s",S.name);
	printf("Class     : ");
	scanf("%s",S.clas);
	printf("Roll no.  : ");
	scanf("%d",&S.roll);
	printf("Percentage: ");
	scanf("%f",&S.per);
	printf("\n\nDetails of Students are:\n");
	printf("Name      : %s\n",S.name);
	printf("Class     : %s\n",S.clas);
	printf("Roll no.  : %d\n",S.roll);
	printf("Percentage: %.2f\n",S.per);
}
	
		 
