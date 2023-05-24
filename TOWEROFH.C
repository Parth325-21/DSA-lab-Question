#include<stdio.h>
#include<conio.h>
void main()
{
int n;
char A,B,C;
void TOH(char,char,char,int);
clrscr();
printf("enter number of Disc:");
scanf("%d",&n);
TOH('A','B','C',n);
getch();
}
void TOH(char a,char b,char c,int n)
{
if(n==1)
{
printf("Move disc from %c to %c\n",a,b);
return;
}
else
{
TOH(a,c,b,n-1);
printf("Move disc %c to %c\n",a,b);
TOH(c,b,a,n-1);
}
}