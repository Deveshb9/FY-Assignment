#include<stdio.h>
#include<stdlib.h>
main()
{
FILE *fp1,*fp2;
char first[10],second[20],ch;
printf("\nEnter the first file name to read:\n")
scanf("%s",first);
fp1=fopen(first,"r");
if(fp1==NULL)
{
printf("error\n");
exit(0);
}
printf(\nEntersecond file to copy data:\n");
scanf("%s",second);
fp2=fopen(second,"w");
ch=fgetc(fp1);
while(ch!=EOF)
{
printf("%c",ch);
fputc(ch,fp2);
ch=fgetc;
}
fclose(fp1);
fclose(fp2);
}
