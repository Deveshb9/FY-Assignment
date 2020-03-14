#include<stdio.h>
#include<stdlib.h>

main()
{
	 int ch=0,n=0;
	 int A[10][10],B[10][10],C[10][10],D[10][10];
	 int i,j,a=0,b=0;
	 do
	 {
	 printf("Enter value of n for square matrix:(limit 10)\n");
	 scanf("%d",&n);
	 if(n<10)
	 {
	 printf("Enter first matrix:\n");
	 for(i=0;i<n;i++)
	 	for(j=0;j<n;j++)
	 	scanf("%d",&A[i][j]);
	 printf("\nEnter Second matrix:\n"); 
	 for(i=0;i<n;i++)
	 	for(j=0;j<n;j++)
	 	scanf("%d",&B[i][j]);	 
	 do
	 {
	 printf("Enter the operation to be performed:\n");
	 printf("1.Addition\n");
	 printf("2.Subtraction\n");
	 printf("3.Exit\n");
	 printf("choice:");
	 scanf("%d",&ch);
	 switch(ch)	
	 {
	 case 1:for(i=0;i<n;i++)
	 		for(j=0;j<n;j++)
			   C[i][j]=A[i][j]+B[i][j];
	 
	 	   printf("\nThe Addition of the matrices is: \n");
	 	   for(i=0;i<n;i++)
	        {
	 	   for(j=0;j<n;j++)
		 	printf("%d ",C[i][j]);
		   printf("\n");
	 	   }
	 	   printf("\n");
	 	   break;
	
	case 2:for(i=0;i<n;i++)
	 	   for(j=0;j<n;j++)
			D[i][j]=A[i][j]-B[i][j];		 	
	 	 	printf("\nThe Substraction of the matrices is: \n");
	 		for(i=0;i<n;i++)
		     {
	 		for(j=0;j<n;j++)
		 	 printf("%d ",D[i][j]);
			printf("\n");
	 		}
	 		printf("\n");
	 		break;
	 case 3:exit(0);
	default:printf("\nWrong entry!!!");
	}
    }while(a!=1);
   }
   else
    {
    printf("\nWrong entry!!!\n");
    b=1; 
    }
   }while(b!=0);
} 
		 
