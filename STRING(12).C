#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
//char c[]="tycomp",ch[]={'a','b','c','d','e'};
char name[20],c[]="tycomp";
  clrscr();
  puts("enter ur name");
  gets(name);
  puts("your name=");
  puts(name);
//printf("string1=%s\n",c);
//printf("string2=%s\n",ch);
printf("\nlength of string=%d",strlen(name));
//printf("\ncompare two string",strcmp(c,ch));
printf("\nconcat two string=%s",strcat(c,name));
printf("\nserch chracter from string=%s",strchr(c,'o'));
printf("\nreversing string=%s",strrev(name));
printf("\nlower case=%s",strlwr(name));
printf("\nupper case=%s",strupr(name));
//printf("\nserch string from string=%s",strstr(c,'comp'));
 //printf("\ncopy two string=%s",strcpy(c,ch));
getch();
}