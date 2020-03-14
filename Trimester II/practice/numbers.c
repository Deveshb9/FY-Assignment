#include<stdio.h>
main()
{
  int ch=0;
  printf("Enter number b/w 1 to 5 to print them in words:");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:printf("one\n");
  break;
  case 2:printf("two\n");
  break;
  case 3:printf("three\n");
  break;
  case 4:printf("four\n");
  break;
  case 5:printf("five\n");
  break;
  default: printf("Wrong entry\n");
  }
 }

