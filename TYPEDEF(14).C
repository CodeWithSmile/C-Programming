#include<stdio.h>
#include<conio.h>
typedef struct student
{
char name[10];
int age;
}stud;
void main()
{
stud s;
typedef unsigned int uint;
uint i,j;
i=19;
j=20;
s.age=10;
strcpy(s.name,"muskan");
clrscr();
printf("\nage=%d",s.age);
printf("\n name=%s",s.name);
printf("\ni =%d",i);
printf("\nj =%d",j);
getch();
}
