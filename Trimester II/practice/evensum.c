#include<stdio.h>
main()
{
 int i=0,sum=0;
 while(i<=10)
 {
 if(i%2==0)
 sum=sum+i;
 i++;
 }
 printf("sum of even numbers from first 10 numbers is %d",sum);
 printf("\n");
 }
