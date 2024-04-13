#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,n,sum=0,m=0;
printf("\n---------while---------\n");
while(i<=5)
{
printf("%d\n",i);
i++;
}
printf("\n------do-while------------\n");
do
{
printf("\nenter a number=");
scanf("%d",&n);
sum+=n;
m++;
}while(m<=3);
printf("\nSum=%d",sum);

getch();
}