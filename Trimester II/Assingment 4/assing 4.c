#include<stdio.h>

main()
{
	 int ch=0;
	 float a,b;
	 printf("\nSelect one of the option to perform operation: ");
	 printf("\n1.Addition");
	 printf("\n2.substraction");
	 printf("\n3.Multipication");
	 printf("\n4.Division\n");
	 printf("Choice: ");
	 scanf("%d",&ch);
	 printf("\nEnter 2 nos. to perform operation:\n");
	 scanf("%f%f",&a,&b);
	 printf("\nAnswer: ");
	 switch(ch)
	 {	
	 	case 1: printf("%f\n",a+b);
	 		   break;
	 	case 2: printf("%f\n",a-b);
	 		   break;
	 	case 3: printf("%f\n",a*b);
	 		   break;
	 	case 4: printf("%f\n",a/b);
	 		   break;
	 	default:printf("wrong entry\n");		
	 }
} 
		 
