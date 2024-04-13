#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,ar1[5],ar2[5]={1,2,4,5,6},ar3[]={11,22,33,44,55};  //declaration of array
int a[2][3]={{1,2,3},{4,5,6}},a1[2][2],m,n;
ar1[0]=8; //initialization of array
ar1[1]=3;
ar1[2]=4;
ar1[3]=5;
ar1[4]=9;
clrscr();
printf("---------------------------\n");
for(i=0;i<5;i++)
{
printf("%d\n",ar1[i]);
}//end of loop
printf("\n----------------------------\n");
for(j=0;j<5;j++)
{
printf("[%d]=%d\n",j,ar2[j]);
}
printf("\n------------------------------\n");
for(j=0;j<5;j++)
{
printf("[%d]=%d\n",j,ar3[j]);
}
printf("\n-----------------------\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("[%d][%d]=%d\n",i,j,a[i][j]);
}
}
printf("\n--------------------------\n");
for(m=0;m<2;m++)
{
for(n=0;n<2;n++)
{
printf("enter a=[%d][%d]=",m,n);
scanf("%d",&a1[m][n]);
}
}
printf("\nprint element\n");
for(m=0;m<2;m++)
{
printf("\n");
for(n=0;n<2;n++)
{
printf("%d\t",a1[m][n]);
}
}
getch();
}