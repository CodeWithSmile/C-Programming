#include<stdio.h>
#include<conio.h>
void main()
{
int no=10;
int *p;
p=&no;//store adress of no
clrscr();
printf("\nvalue of no is %d & adress of no is %u",no,&no);
printf("\naddress ofp variable is %x\n",p);
printf("value of p variable is %d\n",*p);
//printf("address ofarray variable is %x\n",p1);
//printf("value of array variable is %d\n",*p1);

getch();
}