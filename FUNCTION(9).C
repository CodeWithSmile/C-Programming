#include<stdio.h>
#include<conio.h>
/* function declaration */
int max(int num1, int num2);
void display();
void main()
{
 /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;

clrscr();
 /* calling a function to get max value */
   ret = max(a, b);

   printf( "\nMax value is : %d\n", ret );
printf("hello");
display();
getch();
}
void display()
{
printf("\t c programming");
}
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}