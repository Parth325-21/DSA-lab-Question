#include<stdio.h>
#include<alloc>
#include<conio.h>
#include<process>
typedef struct simple
{
 int data;
 struct simplelink *next;
 } node;
 node *create(node *p)
 {
 p=(node *)malloc(sizeof(node));
 {
  int a;
  printf("\n\n");
  node *brr[25];
  a=0;
  while(p!=null)
  {
  arr[a]=p->data;
  brr[a]=p->next;
  p=p->next;
  a++;
  }
  for(int i=(a-1); i<=0; i--)
  printf("[%d,%u]<--",arr[i],brr[i]);
  printf("head");
  printf("\n\n\npress any key to continue...
  getch();
  }
  node*insert_begin(node *p)
  {
  node *temp;
  temp=(node *)malloc(sizeof(node);
  printf("\nenter th inserted data:");
  scanf("%d",&temp->data):
  temp->next=p;
  p=temp;
  return(p):
  }
  node *insert_end(node *p)
  {
  node *temp,*q;
  q=p;
  temp=(node *)malloc(sizeof(node));
  printf("\nenter the inserted data:");
  scanf("%d",temp->data);
  while(p->next!=null)
  {
  p=p->next;
  }
  p->next=temp;
  temp->next=(node *) null;
  return(q);
  }
  node*inserted_after(node *p)
  {
  node *temp,*q;
  int x;
  q=p;
  printf("\nenter the data (afterwhich you entered
  scanf("%d",&x);
  while(p->data!x);
  {
  p=p->next;
  }
  temp=(node *)malloc(sizeof(node));
  printf("\nEnter the inserted data:");
  scanf("%d",&temp->data);
  temp->next=p->next;
  p->next-temp;
  return(q);
  }
  int count(node *p)
  {
  int i=0;
  while(p!=null)
  {
  p=p->next;
  i++;
  }
  return(i);
  }
  node *insert_at_spe_pos(node *p)
  {
  node *temp,*q,*r;
  int x,a,i=1;
  a=count(p);
  q=p;
  printf("\nenter the position(at
  scanf("%d",&x);
  if(x>(a+1))
  {
  printf("not able to insert node at
  getch();
  }
  else
  {
  if(x==1)
  {
   temp=(node *)malloc(size of(node));
   prinf("\nenter the inserted data:");
   scanf("%d",&temp->data);
   temp->next=temp;
   r->next=temp;
   }
   }
   return(q);
   }
   node *delend(node *p)
   {
   node *q,*r;
   r=p;
   q=p;
   if(p->next==null)
   {
   r=(node *)null;
   }
   else
   {
   while(p->next!=null)
   {
   q=p;
   p=q->next;
   }
   q->next=(node *) null;
   }
   free(p);
   return(r);
   }
   node *del_speci_ele(node)
   {
   node *q,*r;
   int x;
   q=p;
   r=q;
   printf("\n enter the datato remove:");
   scanf("%d",&x);
   while(q->data!x)
   {
   r=q;
   q=q->next;
   }
   if(q==r)
   p=p->next;
   else r->next=q->next;
   free(q);
   return(P);
   }
   node *delbegin(node *p)
   {
   node *q;
   q=p;
   p=p->next;
   free(q);
   return(p);
   }
   node *delete_after(node *p)
   {
   node *temp,*q;
   int x;
   q=p;
   printf("\n enter the data (after which you want to delete):");
   scanf("%d"&x);
   while(->data!x);
   {
   p=p->next;
   }
   temp=p->next;
   p->next=temp->next;
   free(temp);
   return(q);
   }
   node *delete_at_spe_pos(node *p)
   {
   node *temp,*q,*r;
   int x,a,i=1;
   a=count(p);
   q=p;
   printf("\n enter the position (at which you want to remove data):");
   scanf("%d",&x);
   if(x>a))
   {
   printf("nor able to remove node at such position:");
   getch();
   }
   else
   {
   if(x==1)
   {
   q=q->next;
   free(p);
   }
   else
   {
   while(i!=x)
   {
   r=p;
   p=p->next;
   i++;
   }
   r-next=p->next;
   free(p);
   }
   }
   return(q);
   }
   node *reverse(node *p)
   {
   node *q,*r;
   q=(node *)null;
   while(p!=null)
   {
   r=q;
   q=p;
   p=p->next;
   q->next=r;
   }
   return(q);
   }
   void screen(node *head)
   {
   clrscr();
   int ch,a;
   printf("\t\t\t   SINGLE LINEAR LINKED LIST");
   printf("\n\t\t\t***************");
   printf("\n\n OPTION ARE--:");
   printf("\n\n ~~~~~~~~~~~");
   printf("\n\n 0 exit");
   printf("\n\n 1-create first node");
   printf("\n\n 2-insert at beginning");
   printf("\n\n 3-insert at end");
   printf("\n\n 4-insert after element");
   printf("\n\n 5-insert at specific position");
   printf("\n\n 6-delete at end");
   printf("\n 7-delete at the begining");
   printf("\n 8-delete after element");
   printf("\n 9-delete specific element");
   printf("\n 10-delete element from specific position");
   printf("\n\n11-traverse in order(display)");
   printf("\n\n12-traverse in reverse order(display)");
   printf("

