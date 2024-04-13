#include<stdio.h>
#include<conio.h>
#include<string.h>
//function declaration
int addition(int *num1, int *num2);

void main()
{
    //local variable definition
    int answer;
    int num1 = 10;
    int num2 = 5;
	   clrscr();
    //calling a function to get addition value
    answer = addition(&num1,&num2);

    printf("The addition of two numbers is: %d\n",answer);
    getch();
}

//function returning the addition of two numbers
int addition(int *a,int *b)
{
    return *a + *b;
}