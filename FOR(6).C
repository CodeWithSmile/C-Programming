#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("\nenter a number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d\n",(n*i));
}
printf("\n---------------break and continue---------\n");
for(i=0;i<10;i++)
{
if(i==5)
{
continue;
//break;
}
printf("%d\n",i);
}
getch();
}
