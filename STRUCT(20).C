#include<stdio.h>
#include<conio.h>
struct emp
{
int id;
char name[30];
}e1;
void main()
{
e1.id=101;
e1.name[30]='a';
strcpy(e1.name,"girls");  //this is because name is char
//array(c string)and we cannot use assignment op
printf("\nchar:%c",e1.name);
printf("\nemployee id:%d",e1.id);
printf("\nemployee name:%s",e1.name);
getch();
}