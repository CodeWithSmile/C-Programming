#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=5,c,age;
clrscr();
c=a+b;
printf("\naddition=%d",c);
c=a-b;
printf("\nsub=%d",c);
c=a/b;
printf("\ndiv=%d",c);
c=a*b;
printf("\nmul%d",c);
c=a%b;
printf("\nmod=%d",c);
printf("\-----------arthmatic op------------\n");
a++; //post
printf("\nincrement=%d",a);
--b;//pre
printf("\ndec=%d",b);
printf("\-------------------inc-dec------------\n");
printf("\na==b-%d",a==b);//0 means false else 1
printf("\na!=b-%d",a!=b);//0 means false else 1
printf("\na>b-%d",a>b);//0 means false else 1
printf("\na<b-%d",a<b);//0 means false else 1
printf("\na<=b-%d",a<=b);//0 means false else 1
printf("\na>=b-%d",a>=b);//0 means false else 1
printf("\-------------relational op-----------\n");
printf("\n&&=%d",a&&b);
printf("\n||=%d",a||b);
//printf("\n!=%d",a!b);
printf("\-----------logical op---------------\n");
printf("\na==b-%d",a==b);
printf("\na+=b-%d",a+=b);
printf("\na-=b-%d",a-=b);
printf("\na/=b-%d",a/=b);
printf("\na*=b-%d",a*=b);
printf("\na%=b-%d",a%=b);
printf("\-------------assignment op-------------\n");
printf("\n<<=%d",a<<b);
printf("\n>>=%d",a>>b);
//printf("\n<<=%d",a~b);
printf("\n<<=%d",a^b);
//printf("\n<<=%d",a!b);
printf("\n-------------bitwise op-------------\n");
printf("enter ur age");
scanf("%d",&age);
(age>=18)?(printf("\neligible for voting")):(printf("\nnot eligible"));
printf("\n------conditional op-------------\n");
printf("size of=%d",sizeof(a));
getch();
}