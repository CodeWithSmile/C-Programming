#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("enter ur choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("one");
break;
case 2:
printf("two");
break;
case 3:
printf("three");
break;
case 4:
printf("four");
break;
case 5:
printf("five");
break;
default:
printf("enter correct choice");
break;
}
getch();
}