#include<stdio.h>
#include<conio.h>
void insertation_sort(int a[20],int num)
{
   int j,key,i;
   for(j=2;j<num;j++)
   {
    key=a[j];
    i=j-1;
    while(i>0 && a[i]>key)
    {
       a[i+1]=a[i];
       i=i-1;
    }
    a[i+1]=key;
  }
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
void display(int a[30],int num)
{
   int i;
   for(i=1;i<num;i++)
   {
    printf("%d\t",a[i]);
   }
}
void main()
{
    int num,a[30];
    clrscr();
    printf("Enter number of elements :");
    scanf("%d",&num);
    input_array(a,num);
    insertation_sort(a,num);
    display(a,num);
    getch();
}

















