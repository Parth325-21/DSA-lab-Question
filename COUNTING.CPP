#include<stdio.h>
#include<conio.h>
#define k 10
void display(int a[30],int num)
{
    int i;
   for(i=1;i<num;i++)
   {
    printf("%d\t",a[i]);
   }
}
void counting_sort(int a[30],int b[30],int length)
{
  int c[30],j,i;
  for(i=0;i<=k;i++)
  {
    c[i]=0;
  }
  for(j=1;j<length;j++)
  {
  c[a[j]]=c[a[j]]+1;
  }
  for(i=1;i<=k;i++)
  {
    c[i]=c[i]+c[i-1];
  }
  for(j=length-1;j>=0;j--)
  {
     b[c[a[j]]]=a[j];
     c[a[j]]=c[a[j]]-1;
  }
  display(b,length);
}
void input_array(int a[30],int num)
{
  int i;
  for(i=1;i<num;i++)
  {
     printf("enter %d element",i);
     scanf("%d",&a[i]);
  }
}
void main()
{
  int num,a[30],b[30];
  clrscr();
  printf("enter number elements");
  scanf("%d",&num);
  input_array(a,num);
  counting_sort(a,b,num);
  getch();
}