#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=8,b=3,p=10,q=20,r=30;
clrscr();
printf("\n-------if else------------\n");
printf("\nenter a number=");
scanf("%d",&i);
if(i%2==0)
{
printf(" number is even");
}
else
{
printf("number is odd");
}
printf("\n----------ladder if else-----------\n");
if(a==b)
{
printf("\nnumber is equal %d=%d",a,b);
}
else if(a>b)
{
printf("\na %d is greter",a);
}
else
{
printf("\nb %d is greater",b);
}
printf("\n----------nested if else-----------\n");
if(p>q)
{
if(p>r)
{
printf("\np=%d is larger",p);
}
else
{
printf("\nr=%d is larger",r);
}
}
else
{
if(q>r)
{
printf("\nq=%d is larger",q);
}
else
{
printf("\nr=%d is larger",r);
}
}
getch();
}